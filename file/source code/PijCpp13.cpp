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
                cout<<year<<"年是闰年"<<endl;
            }
            else
            {
                cout<<year<<"年是平年"<<endl;
            }
        }
        else
        {
            if(year % 4 == 0)
            {
                cout<<year<<"年是闰年"<<endl;
            }
            else
            {
                cout<<year<<"年是平年"<<endl;
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
