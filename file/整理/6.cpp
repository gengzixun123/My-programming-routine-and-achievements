#include<iostream>
#include<stdio.h>

using namespace std;

struct A
{
    int x;
    int y;

    int zc()
    {
        int p = (x + y) * 2;
        return p;
    }

    int mj()
    {
        q = x * y;
        return q;
    }
};

int main()
{
    A one;
    one.x = 14;
    one.y = 54;

    cout<<one.zc()<<endl;
    cout<<one.mj()<<endl;

    A *tow = new A;
    tow->x = 14;
    tow->y = 54;

    cout<<tow->zc()<<endl;
    cout<<tow->mj()<<endl;

    system("pause");

    return 0;
}
