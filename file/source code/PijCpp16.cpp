#include<iostream>

using namespace std;

int getsum(int *lm,int l)
{
    int sum = 0;
    for(int i = 0; i < l; i++)
    {
        sum = sum + lm[i];
    }
    return sum;
}

int main()
{
    int a[6] = {1,1,4,5,1,4};
    int s = getsum(a,6);
    cout<<"�б�"<<a<<"��Ϊ"<<s<<endl;

    int b[7] = {1,9,1,9,8,1,0};
    int s1 = getsum(b,7);
    cout<<"�б�"<<b<<"��Ϊ"<<s1<<endl;

    int c[4] = {114,411,191,810};
    int s2 = getsum(c,4);
    cout<<"�б�"<<c<<"��Ϊ"<<s2<<endl;

    int d[5] = {3793,1432,2720,1627,7315};
    int s3 = getsum(d,5);
    cout<<"�б�"<<d<<"��Ϊ"<<s3<<endl;

    system("pause");

    return 0;
}
