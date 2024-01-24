#include<iostream>

using namespace std;

class A
{
public:
    int x;
    int *y;
};
int main()
{
    int a114;
    A a;
    a.x = 3;
    a.y = &a114;


    cout<<a.x<<endl;
    cout<<a.y<<endl;

    system("pause");

    return 0;
}
