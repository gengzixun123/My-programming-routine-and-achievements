#include<iostream>

using namespace std;

int num = 0;

void add()
{
    num = num + 1;
}

int main()
{
    //ѭ������i����ֵֹ�����޸�
    for(int i = 0; i <= 5; i++)
    {
        add();
        cout<<num<<endl;
    }


    system("pause");

    return 0;
}
