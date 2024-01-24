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
        int q = x * y;
        return q;
    }

};

struct B: public A
{
    int h;

    int bmj()
    {
        int s = 2 * (x * y + x * h + y * h);
        return s;
    }

    int tj()
    {
        int t = mj() * h;
        return t;
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

    B three;
    three.x = 14;
    three.y = 54;
    three.h = 114;

    cout<<three.tj()<<endl;
    cout<<three.bmj()<<endl;

    B *four = new B;
    four->x = 14;
    four->y = 54;
    four->h = 114;

    cout<<four->tj()<<endl;
    cout<<four->bmj()<<endl;

    system("pause");


    return 0;
}
