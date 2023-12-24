#include<iostream>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[2][2] = {{1,1},{4,5}};
    int c[2][2][2] = {{{1,1},{4,5}},{{1,9},{1,9}}};

    int* p1 = &a[0];
    int (*p2)[2][2] = &a;

    cout<<p1<<endl;

    return 0;
}
