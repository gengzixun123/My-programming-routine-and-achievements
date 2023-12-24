#include<iostream>

using namespace std;

bool select(int a);

int main()
{
    int a;

    cout<<"请输入你要判断的数";
    cin>>a;
    cout<<endl;

    bool t = select(a);

    system("pause");

    return 0;
}

bool select(int a)
{
    bool type = false;

    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            type = true;
            break;
        }
    }
    if(type == true)
    {
        cout<<"数 "<<a<<" 不是素数"<<endl;
        return true;
    }
    else if(type == false)
    {
        cout<<"数 "<<a<<" 是素数"<<endl;
        return false;
    }
}
