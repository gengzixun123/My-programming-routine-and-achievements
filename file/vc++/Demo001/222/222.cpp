// 222.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<winsock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<windows.h>
#include<string>+

using namespace std;

//服务器套接字
SOCKET s_socket;

char urladdr[256];
char urlpath[256];

void snapJPG(char* begaddr);

//2 连接服务器
void connectaddr(char* Addr)
{
    // 1 设置网络协议版本
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2),&wsaData);
	
    //创建socket
    s_socket = socket(AF_INET, SOCK_STREAM, NULL);
	
    //绑定
    SOCKADDR_IN addr = {0};
    addr.sin_family = AF_INET;
	
    int r = bind(s_socket,reinterpret_cast<sockaddr*>(&addr), sizeof addr);
    if(r == -1)
    {
        cout<<"绑定失败"<<endl;
        return;
    }
    cout<<"绑定成功"<<endl;
	
    //获取主机IP地址
    struct hostent* p = gethostbyname(Addr);
    if(p == NULL)
    {
        cout<<"获取主机IP地址失败"<<endl;
        return;
    }
    cout<<"获取主机IP地址成功"<<endl;
    memcpy(&addr.sin_addr,p->h_addr,4);
    addr.sin_port = htons(80);
	
    r = connect(s_socket,reinterpret_cast<sockaddr*>(&addr), sizeof addr);
	
    if(r == -1)
    {
        cout<<"连接服务器失败"<<endl;
        return;
    }
	
    cout<<"连接服务器成功"<<endl;
	
    //3 发请求
	
	string reqInfo = "GET " + (string)urlpath + " HTTP/1.1\r\nHost:" + (string)urladdr + "\r\nConnection:Close\r\n\r\n";

	r = send(s_socket,reqInfo.c_str(),reqInfo.size(),NULL);
	if(r <+ 0)
	{
		cout<<"请求发送失败"<<endl;
		return;
	}
	cout<<"请求发送成功"<<endl;
}


//4 接收源代码 并 储存

void gethtml()
{
	string allhtml;
	
	int r;
	
	char buff[1024];
	
	while(1)
	{
		r = recv(s_socket,buff,1023,NULL);

		if(r > 0)
		{
			cout<<"接到数据"<<endl;
			buff[r] = 0;
			allhtml += buff;
		}
		else
		{
			cout<<"接收完成"<<endl;
			break;
		}

	}
	
	cout<<"网页源代码"<<endl;
	cout<<allhtml<<endl;
	cout<<endl;
}

void jiexiwangzhi(char* str)
{
    memset(urladdr, 0, 256);
    memset(urlpath, 0, 256);
	
    char* p = strstr(str,"http://");
    if(p == NULL) return;
    p += 7;
	
    sscanf(p,"%[^/]%s",urladdr,urlpath);
	
    cout<<"网址："<<urladdr<<endl;
    cout<<"路径："<<urlpath<<endl;
}

int main()
{
    char buff[256] = {0};
    cout<<"输入一个URL：";
    cin>>buff;










































    snapJPG(buff);

    system("pause");

    return 0;
}
void snapJPG(char* begaddr)
{
    //1 解析网址(找出网站地址和二级地址)
    jiexiwangzhi(begaddr);
    //2 连接服务器
    connectaddr(urladdr);
    //3 发请求
    //4 接收源代码 并 储存
	gethtml();
    //5 解析（从源代码中找出图片链接和其他网页链接）
	
    //6 最终获取
	
}

