#include<iostream>

using namespace std;

int x;
int y;
int z;

int mx(int a,int b,int c)
{
    int mx = a;

    if(b > a)
    {
        mx = b;
    }

    if(c > mx)
    {
        mx = c;
    }

    return mx;
}

int main()
{
    cout<<"输入的一个数：";
    cin>>x;
    cout<<endl;

    cout<<"输入的二个数：";
    cin>>y;
    cout<<endl;

    cout<<"输入的三个数：";
    cin>>z;
    cout<<endl;

    int m = mx(x,y,z);

    cout<<x<<" "<<y<<" "<<z<<" 三个数"<<endl;
    cout<<"最大值为"<<m<<endl;

    system("pause");

    return 0;
}
