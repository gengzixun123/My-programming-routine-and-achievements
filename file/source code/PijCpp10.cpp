#include<iostream>

using namespace std;


int main()
{
    int type = 1;

    int a[4][4] =
    {
        {1,2,3,4},
        {0,1,1,4},
        {0,0,1,9},
        {0,0,0,9}
    };

    int b[4][4] =
    {
        {1,2,3,4},
        {1,1,4,5},
        {0,0,1,9},
        {0,0,1,9}
    };

    int c[4][4] =
    {
        {1,2,3,4},
        {0,1,1,4},
        {0,0,0,9},
        {0,0,0,9}
    };

    for(int k = 0; k <= 3; k++)
    {
        for(int h = 0; h <= k-1; h++)
        {
            cout<<a[k][h]<<" ";
            if(a[k][h] != 0)
            {
                type = 0;
                break;
            }
        }
        for(int j = 0; j <= 3 - k; j++)
        {
            cout<<a[k][h]<<" ";
            if(a[k][j] == 0)
            {
                type = 0;
                break;
            }
        }
        cout<<endl;
        if(type == 0)
        {
            break;
        }
    }
    if(type == 1)
    {
        cout<<"矩阵a 地址 "<<a<<"是上三角矩阵"<<endl;
    }
    else
    {
        cout<<"矩阵a 地址 "<<a<<"不是上三角矩阵"<<endl;
    }

    type = 1;

    for(int k = 0; k <= 3; k++)
    {
        for(int h = 0; h <= k-1; h++)
        {
            cout<<b[k][h]<<" ";
            if(b[k][h] != 0)
            {
                type = 0;
                break;
            }
        }
        for(int j = 0; j <= 3 - k; j++)
        {
            cout<<b[k][h]<<" ";
            if(b[k][j] == 0)
            {
                type = 0;
                break;
            }
        }
        cout<<endl;
        if(type == 0)
        {
            break;
        }
    }
    if(type == 1)
    {
        cout<<"矩阵b 地址 "<<b<<"是上三角矩阵"<<endl;
    }
    else
    {
        cout<<"矩阵b 地址 "<<b<<"不是上三角矩阵"<<endl;
    }

    type = 1;

    for(int k = 0; k <= 3; k++)
    {
        for(int h = 0; h <= k-1; h++)
        {
            cout<<c[k][h]<<" ";
            if(c[k][h] != 0)
            {
                type = 0;
                break;
            }
        }
        for(int j = 0; j <= 3 - k; j++)
        {
            cout<<c[k][h]<<" ";
            if(c[k][j] == 0)
            {
                type = 0;
                break;
            }
        }
        cout<<endl;
        if(type == 0)
        {
            break;
        }
    }
    if(type == 1)
    {
        cout<<"矩阵c 地址 "<<c<<"是上三角矩阵"<<endl;
    }
    else
    {
        cout<<"矩阵c 地址 "<<c<<"不是上三角矩阵"<<endl;
    }

    return 0;
}
