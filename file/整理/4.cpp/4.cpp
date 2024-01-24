#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);

    int n;
    int num = 0;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            if(n % i == 0)
            {
                cout<<i<<endl;-
                num += 1;
            }
        }
    }

    cout<<num<<endl;

    return 0;
}
