#include<iostream>

using namespace std;

bool select(int a);

int main()
{
    int a;

    cout<<"��������Ҫ�жϵ���";
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
        cout<<"�� "<<a<<" ��������"<<endl;
        return true;
    }
    else if(type == false)
    {
        cout<<"�� "<<a<<" ������"<<endl;
        return false;
    }
}
