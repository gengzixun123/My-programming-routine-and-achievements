#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int GetR(int *a,int b)
{
    int x = time(NULL);
    srand(x);
    *a = (257 * rand()) % (b + 1);
    //cout<<*a<<endl;
    return 0;
}

int main()
{
    int a;
    int b;
    int c;
    if(c <= 3)
    {
        for(int i = 0; i < 3; i++)
        {
            GetR(&a,20);
            cout<<a<<endl;
            if(a == 10)
            {
                cout<<"��ɫ��"<<endl;
            }
            else
            {
                GetR(&b,10);
                cout<<b<<endl;
                if(b <= 6)
                {
                    cout<<"���ܿ�"<<endl;
                }
                else
                {
                    cout<<"������"<<endl;
                }
            }
            system("pause");
        }
        cout<<"��ɫ��(����)"<<endl;
    }
    else
    {
        for(int i = 0; i < 4; i++)
        {
            GetR(&a,20);
            cout<<a<<endl;
            if(a == 10)
            {
                cout<<"��ɫ��"<<endl;
            }
            else
            {
                GetR(&b,10);
                cout<<b<<endl;
                if(b <= 6)
                {
                    cout<<"���ܿ�"<<endl;
                }
                else
                {
                    cout<<"������"<<endl;
                }
            }
            system("pause");
        }
    }

    return 0;
}
