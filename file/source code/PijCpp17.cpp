-#include<iostream>

using namespace std;

struct CFX
{
    int x;
    int y;
};

int main()
{
    CFX one;
    one.x = 3;
    one.y = 4;

    CFX *tow = new CFX;
    tow->x = 33;
    tow->y = 44;

    cout<<one.x<<";"<<one.y<<endl;
    cout<<tow->x<<";"<<tow->y<<endl;

    system("pause");

    return 0;
}
