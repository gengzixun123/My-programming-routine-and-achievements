/*
A����дһ���ַ����飬���ַ�����洢�Լ������֣�����Լ������֡�
B����дһ���������飬�����鸳ֵ���ҳ������е��������Сֵ
C����дһ���������飬�����鸳ֵ���������е�������
D����дһ���������飬�����鸳ֵ������ĳ��ֵ�Ƿ��������У�������ڣ�����-1������ڣ������±ꡣ
*/
#include<iostream>

using namespace std;

int main()
{
    //A
    char name[5] = "eirc";
    cout<<name<<endl;

    //B
    int a[20] = {112,30,5,114,1145,123,45,39,11112,2333,3912,1267,129,1919810,114514,14522,25,2432,191114,240114};
    //���ֵ
    int zuidazhi = 0;
    for(int i = 0; i <= 19; i++)
    {
        if(a[i] > zuidazhi)
        {
            zuidazhi = a[i];
        }
    }
    cout<<"���ֵΪ"<<zuidazhi<<endl;

    //��Сֵ
    int zuixiaozhi = 0;
    for(int j = 0; j <= 19; j++)
    {
        if(a[j] < zuixiaozhi)
        {
            zuixiaozhi = a[j];
        }
    }
    cout<<"��СֵΪ"<<zuixiaozhi<<endl;

    //C
    int sum = 0;
    for(int k = 0; k <= 19; k++)
    {
        sum = sum + a[k];

    }
    cout<<"����Ϊ"<<sum<<endl;

    //D
    int zai = -1;
    int input;
    cout<<"����һ����";
    cin>>input;

    for(int l = 0; l <= 19; l++)
    {
        if(a[l] == input)
        {
            zai = l;
            break;
        }
    }
    cout<<zai<<endl;
}
