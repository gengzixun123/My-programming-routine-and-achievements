#include<iostream>

using namespace std;

void turn()
{
    int a;
    int b;

    cin>>a>>b;

    b = a + b;
    a = b - (a * 2);

    b = (b - a) / 2;
    a = (((b + a) + b) + ((b + a) - b)) / 2;
    cout<<a<<":"<<b<<endl;
}

void turn2()
{
    int a;
    int b;

    cin>>a>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<a<<":"<<b<<endl;
}

int main()
{
    turn();
    turn2();

    system("pause");

    return 0;
}
