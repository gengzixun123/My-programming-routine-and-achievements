#include<iostream>

using namespace std;

void PingNianRunNian()
{
    int year = 1000;
    for(int i = 0; i <= 1000; i++)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout<<year<<"��������"<<endl;
            }
            else
            {
                cout<<year<<"����ƽ��"<<endl;
            }
        }
        else
        {
            if(year % 4 == 0)
            {
                cout<<year<<"��������"<<endl;
            }
            else
            {
                cout<<year<<"����ƽ��"<<endl;
            }
        }
        year++;
    }

}

int main()
{
    PingNianRunNian();

    system("pause");

    return 0;
}
