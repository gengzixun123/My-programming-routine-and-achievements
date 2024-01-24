#include<iostream>

using namespace std;

int Td(int a,int b)
{
    int a1 = a;
    int b1 = b;
    //int c = a1 * b1;
    int ptr = 0;

    while(a1 % b1 != 0)
    {
        ptr = b1;
        b1 = a1 % b1;
        a1 = ptr;
    }

    return b1;
}

void ZYS(int a)
{
    int a1 = a;

    for(int i = 1; i <= a1; i++)
    {
        if(a1 % i == 0)
        {
            int j;
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    break;
                }
            }
            if(j == i)
            {
                cout<<i<<endl;
            }
        }
    }
}

int ZXG(int a,int b)
{
    int a1 = a;
    int a2 = b;

    int max = (a > b) ? a : b;

    while(max % a != 0 || max % b != 0)
    {
        max++;
    }

    return max;
}

int ZXG2(int a,int b)
{
    int a1 = a;
    int a2 = b;

    int i = 1;

    while(a1 * i % a2 != 0)
    {
        i++;
    }

    return a1*i;
}

int main()
{
    int a;
    cin>>a;
    ZYS(a);

    int a1,b1;
    cin>>a1>>b1;
    cout<<ZXG(a1,b1)<<endl;

    int a2,b2;
    cin>>a2>>b2;
    cout<<ZXG2(a2,b2)<<endl;

    int a3,b3;
    cin>>a3>>b3;
    cout<<Td(a3,b3)<<endl;

    system("pause");

    return 0;
}
