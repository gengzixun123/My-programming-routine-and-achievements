#include<iostream>

using namespace std;

class A
{
public:
    int x;
    A *y;
};
int main()
{
    A a1;
    A a;
    a.x = 3;
    a.y = &a1;
    a1.x = 4;
    a1.y = &a;

    cout<<a.x<<endl;
    cout<<a.y<<endl;

    cout<<a1.x<<endl;
    cout<<a1.y<<endl;

    system("pause");

    return 0;
}
