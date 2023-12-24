#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int suijishu = 0;
int cishu = 0;

void GetSuiJiShu()
{
    int n = time(NULL);
    srand(n);
    suijishu = (rand() * 114) % 201;
}

void Play()
{
    int caice = 0;

    cout<<"同学们，练习要开始了！"<<endl;
    cout<<"来，让我看看谁能成为两年半的个人练习生。"<<endl;

    while(true)
    {
        cout<<"来，练习一下，输入一个在一到二百之间的整数"<<endl;
        cin>>caice;
        cishu = cishu + 1;

        if(caice == suijishu)
        {
            cout<<"练习正确,下一个！"<<endl;
            break;
        }

        if(caice < suijishu)
        {
            cout<<"动作幅度太小，没有劲儿！"<<endl;
        }
        if(caice > suijishu)
        {
            cout<<"动作幅度太大，年轻人不要太气盛！"<<endl;
        }
    }
}

void XiaJBLuanShuo()
{
    if(cishu <= 9)
    {
        cout<<"练习时长，两年半，授予金牌练习生称号，并授予中分一副"<<endl;
    }

    else if(cishu <= 15)
    {
        cout<<"练习时长，一年，授予实习练习生称号，并授予背带裤一条，以资鼓励"<<endl;
    }

    else
    {
        cout<<"你干嘛哈哈哎呦，小黑子别来捣乱，给我拱出去"<<endl;
    }
}

int main()
{
    char m[114];

    GetSuiJiShu();
    Play();
    XiaJBLuanShuo();

    cout<<"按回车键退出或留下感言"<<endl;
    cin>>m;

    return 0;
}
