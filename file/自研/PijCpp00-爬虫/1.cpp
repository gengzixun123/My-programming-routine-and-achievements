#include<iostream>
#include<netdb.h>

using namespace std;

// hostnet* svr = gethostbyname(char* name);

int main(int argc,char* argv[])
{
    if(argc<2)
    {
        cout<<"你脑子是不是有疮?传域名呀!!!"<<endl;
        return -1;
    }

    hostnet* svr = gethostbyname(argv[1]);

    cout<<"官方主机名："<<svr->h_name<<endl;

    int i = 0;
    while(svr->aliases[i] != NULL)
    {
        cout<<"主机别名"<<svr->h_aliases[i++]<<endl;
    }

    i = 0;
    while(svr->h_addr_list[i] != NULL)
    {
        in_addr* nip = (in_addr*)svr->h_addr_list[i];
        cout<<"IP地址："<<inet_ntoa(*nip)<<endl;
    }

    system("pause");

    return 0;
}
