#include<iostream>
#include<stdio.h>
#include<string.h>
#include<winsock2.h>
#pragma comment(lib,"ws2_32.lib")
#include<windows.h>

using namespace std;

//�������׽���
SOCKET s_socket;

char urladdr[256];
char urlpath[256];

void snapJPG(char* begaddr);

//2 ���ӷ�����
void connectaddr(char* Addr)
{
    // 1 ��������Э��汾
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2),&wsaData);

    //����socket
    s_socket = socket(AF_INET, SOCK_STREAM, NULL);

    //��
    SOCKADDR_IN addr = {0};
    addr.sin_family = AF_INET;

    int r = bind(s_socket,reinterpret_cast<sockaddr*>(&addr), sizeof addr);
    if(r == -1)
    {
        cout<<"��ʧ��"<<endl;
        return -1;
    }
    cout<<"�󶨳ɹ�"<<endl;

    //��ȡ����IP��ַ
    struct hostent* p = gethostbyname(Addr);
    if(p == NULL)
    {
        cout<<"��ȡ����IP��ַʧ��"<<endl;
        return -1;
    }
    cout<<"��ȡ����IP��ַ�ɹ�"<<endl;
    memcpy(&addr.sin_addr,p->h_addr,4);
    addr.sin_port = htons(80);

    r = connect(s_socket,reinterpret_cast<sockaddr*>(&addr), sizeof addr);

    if(r == -1)
    {
        cout<<"���ӷ�����ʧ��"<<endl;
        return 1;
    }

    cout<<"���ӷ������ɹ�"<<endl;


}

//3 ������
//4 ����Դ���� �� ����
/*
gethtml()
{

}
*/
void jiexiwangzhi(char* str)
{
    memset(urladdr, 0, 256);
    memset(urlpath, 0, 256);

    char* p = strstr(str,"http://");
    if(p == NULL) return;
    p += 7;

    sscanf(p,"%[^/]%s",urladdr,urlpath);

    cout<<"��ַ��"<<urladdr<<endl;
    cout<<"·����"<<urlpath<<endl;
}

int main()
{
    char buff[256] = {0};
    cout<<"����һ��URL��";
    cin>>buff;

    snapJPG(buff);

    system("pause");

    return 0;
}
void snapJPG(char* begaddr)
{
    //1 ������ַ(�ҳ���վ��ַ�Ͷ�����ַ)
    jiexiwangzhi(begaddr);
    //2 ���ӷ�����
    connectaddr(urladdr);
    //3 ������
    //4 ����Դ���� �� ����
    //gethtml();
    //5 ��������Դ�������ҳ�ͼƬ���Ӻ�������ҳ���ӣ�

    //6 ���ջ�ȡ

}
