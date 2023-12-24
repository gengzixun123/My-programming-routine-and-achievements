/*
A、书写一个字符数组，给字符数组存储自己的名字，输出自己的名字。
B、书写一个整数数组，给数组赋值，找出数组中的最大与最小值
C、书写一个整数数组，给数组赋值，求数组中的整数和
D、书写一个整数数组，给数组赋值，查找某个值是否在数组中，如果不在，返回-1，如何在，返回下标。
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
    //最大值
    int zuidazhi = 0;
    for(int i = 0; i <= 19; i++)
    {
        if(a[i] > zuidazhi)
        {
            zuidazhi = a[i];
        }
    }
    cout<<"最大值为"<<zuidazhi<<endl;

    //最小值
    int zuixiaozhi = 0;
    for(int j = 0; j <= 19; j++)
    {
        if(a[j] < zuixiaozhi)
        {
            zuixiaozhi = a[j];
        }
    }
    cout<<"最小值为"<<zuixiaozhi<<endl;

    //C
    int sum = 0;
    for(int k = 0; k <= 19; k++)
    {
        sum = sum + a[k];

    }
    cout<<"数和为"<<sum<<endl;

    //D
    int zai = -1;
    int input;
    cout<<"请输一个数";
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
