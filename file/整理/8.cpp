#include<iostream>

using namespace std;

struct A
{
    int x,y,z;

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

    void disp()
    {
        cout<<x<<":"<<y<<":"<<z<<endl;
    }

    void SetXYZ(int x1,int x2,int x3)
    {
        x = x1;y = x2;z = x3;
    }

    A(int x1, int y1, int z1)
    {
        cout<<"���ù��캯��"<<endl;
        x = x1;y = y1;z = z1;
    }

    A()
    {
        cout<<"�����޲����Ĺ��캯��"<<endl;
    }
};

int main()
{
    A a1;
    a1.x = 3;
    a1.y = 4;
    a1.z = 6;
    a1.disp();

    A a2;
    a2.SetXYZ(3,4,5);
    a2.disp();

    A a3(3,4,5);
    a3.disp();

    system("pause");

    return 0;
}
