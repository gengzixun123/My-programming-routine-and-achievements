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
    cout<<"�����һ������";
    cin>>x;
    cout<<endl;

    cout<<"����Ķ�������";
    cin>>y;
    cout<<endl;

    cout<<"�������������";
    cin>>z;
    cout<<endl;

    int m = mx(x,y,z);

    cout<<x<<" "<<y<<" "<<z<<" ������"<<endl;
    cout<<"���ֵΪ"<<m<<endl;

    system("pause");

    return 0;
}
