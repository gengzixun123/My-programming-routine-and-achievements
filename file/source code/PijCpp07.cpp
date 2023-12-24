#include<iostream>

using namespace std;

int main()
{
    //打印杨辉三角

    //1、获取次数
    int cishu;
    cout<<"输入计算次数:";
    cin>>cishu;
    cout<<endl;

    //2、定义数组及数组初始化
    int yhsanjiao[cishu + 1][cishu + 1];
    //a.整体归零
    for(int kun = 0; kun <= cishu; kun++)
    {
        for(int ck = 0; ck <= cishu; ck++)
        {
            yhsanjiao[kun][ck] = 0;
        }
    }

    //3、运算部分
    for(int i = 0; i <= cishu; i++)
    {
        //初始化行
        yhsanjiao[i][0] = 1;
        yhsanjiao[i][i] = 1;
        for(int j = 1; j < i; j++)
        {
            yhsanjiao[i][j] = yhsanjiao[i - 1][j] + yhsanjiao[i - 1][j - 1];
        }
    }

    //测试程序
    for(int ikun = 0; ikun <= cishu; ikun++)
    {
        for(int cxk = 0; cxk <= cishu; cxk++)
        {
            if(yhsanjiao[ikun][cxk] != 0)
            {cout<<yhsanjiao[ikun][cxk]<<" ";

            }
        }
        cout<<endl;
    }

    system("pause");

    return 0;
}
