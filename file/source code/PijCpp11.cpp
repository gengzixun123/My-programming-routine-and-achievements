#include<iostream>

using namespace std;

int main()
{
    int a[4][4] = {
      {1,1,4,5,},
      {4,1,9,1,},
      {8,1,0,114},
      {191,981,114,5}
    };

    int b[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    cout<<"矩阵:"<<endl;

    for(int c = 0; c < 4; c++)
    {
        for(int k = 0; k < 4; k++)
        {
            cout<<a[c][k]<<" ";
        }
        cout<<endl;
    }

    cout<<"行列转换后为:"<<endl;

    for(int m = 0; m < 4; m++)
    {
        for(int n = 0; n < 4; n++)
        {
            cout<<b[m][n]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
