#include<iostream>

using namespace std;

struct CFT
{
    int x;
    int y;
    int z;
};

int main()
{
    CFT one;
    one.x = 3;
    one.y = 4;
    one.z = 5;

    CFT *tow = new CFT;
    tow->x = 3;
    tow->y = 4;
    tow->z = 5;

    cout<<one.x<<";"<<one.y<<";"<<one.z<<endl;
    cout<<tow->x<<";"<<tow->y<<";"<<tow->z<<endl;

    system("pause");

    return 0;
}
