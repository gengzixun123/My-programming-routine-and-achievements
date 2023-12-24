#include<iostream>

using namespace std;

int main()
{
    int a[4][5] = {{2,71,23,328,145},{142,34,129,538,128},{114,514,191,98,10},{837,31,162,35,114}};
    cout<<"此数组地址为"<<(int)a<<endl;
    cout<<"内容为："<<endl;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sum = sum + a[i][j];
        }
    }
    cout<<"和为"<<sum<<endl;

    int m = a[0][0];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i][j] > m)
            {
                m = a[i][j];
            }
        }
    }
    cout<<"最大值为"<<m<<endl;

    int n = a[0][0];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i][j] < n)
            {
                n = a[i][j];
            }
        }
    }
    cout<<"最小值为"<<n<<endl;

    system("pause");

    return 0;
}
