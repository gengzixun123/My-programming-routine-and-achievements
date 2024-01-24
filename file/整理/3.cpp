#include<iostream>

using namespace std;

int main()
{
    freopen("3-cpp'input.in","r",stdin);
    freopen("3-cpp'output.out","w",stdout);
    int a,b,sum;
    for(int i = 1; i <= 4; i++)
    {
        cin>>a>>b;
        sum = a + b;
        cout<<sum<<endl;
    }

    system("pause");

    return 0;
}
