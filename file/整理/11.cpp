#include<iostream>

using namespace std;

class A
{
public:
    int *y;
    int *x;
};
int main()
{
    A a;
    a.x = new int(3);
    a.y = new int(4);


    cout<<*(a.x)<<endl;
    cout<<*(a.y)<<endl;

    system("pause");

    return 0;
}
