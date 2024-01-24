#include<iostream>

using namespace std;

int main()
{
    freopen("5-cpp'input.in","r",stdin);
    freopen("5-cpp'output.out","w",stdout);

    int num;
    int n[1024] = {0};
    int out = 0;
    int temp;

    cin>>num;

    cin>>temp;
    n[0] = temp;

    for(int i = 1; i < num; i++)
    {
        cin>>temp;
        bool type = true;
        for(int j = 0; j < i; j++)
        {
            if(n[j] == temp)
            {
                type = false;
                break;
            }
        }
        if(type == true)
        {
            n[i] = temp;
            out += 1;
        }
    }

    cout<<out<<endl;

    return 0;
}
