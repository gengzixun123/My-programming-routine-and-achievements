#include<iostream>

using namespace std;

int main()
{
    //��ӡ�������

    //1����ȡ����
    int cishu;
    cout<<"����������:";
    cin>>cishu;
    cout<<endl;

    //2���������鼰�����ʼ��
    int yhsanjiao[cishu + 1][cishu + 1];
    //a.�������
    for(int kun = 0; kun <= cishu; kun++)
    {
        for(int ck = 0; ck <= cishu; ck++)
        {
            yhsanjiao[kun][ck] = 0;
        }
    }

    //3�����㲿��
    for(int i = 0; i <= cishu; i++)
    {
        //��ʼ����
        yhsanjiao[i][0] = 1;
        yhsanjiao[i][i] = 1;
        for(int j = 1; j < i; j++)
        {
            yhsanjiao[i][j] = yhsanjiao[i - 1][j] + yhsanjiao[i - 1][j - 1];
        }
    }

    //���Գ���
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
