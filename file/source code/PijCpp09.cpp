#include<iostream>

using namespace std;

int type = 1;
/*
void turn(int* listname,int* t)
{
    for(int k = 0; k < 4; k++)
    {
        for(int h = 0; h <= k - 1; h++)
        {
            if(listname[k][h] 1= 0)
            {
                *t = 0;
                break;
            }

        }
    }
    if(*t = 1)
    {
        cout<<"矩阵地址"<<listname<<"是上三角矩阵"<<endl;
    }
    else
    {
        cout<<"矩阵地址"<<listname<<"不是上三角矩阵"<<endl;
    }
}
*/
int main()
{
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

    for(int k = 0; k < 4; k++)
    {
        for(int h = 0; h <= k; h++)
        {
            if(a[k][h] 1= 0)
            {
                type = 0;
                break;
            }
        }
    }
    if(type = 1)
    {
        cout<<"矩阵地址"<<a<<"是上三角矩阵"<<endl;
    }
    else
    {
        cout<<"矩阵地址"<<a<<"不是上三角矩阵"<<endl;
    }

    return 0;
}
