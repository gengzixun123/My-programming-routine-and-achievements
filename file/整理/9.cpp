#include<iostream>

using namespace std;

//È«¾Öº¯Êı
int add(int x, int y)
{
    return x + y;
}

struct A
{
    int add(int x, int y)
    {
        return x + y;
    }
};

int main()
{
    cout<<add(2,3)<<endl;
    A a;
    cout<<a.add(14,15)<<endl;

    A *p1 = new A;
    cout<<p1->add(4,5)<<endl;

    A *p2 = &a;
    A *p3 = p1;
    cout<<p2->add(14,15)<<endl;
    cout<<p3->add(11,45)<<endl;

    system("pause");

    return 0;
}
