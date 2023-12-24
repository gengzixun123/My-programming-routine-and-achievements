#include<iostream>

using namespace std;

int main()
{

	int sum1 = 0;
	for(int i = 1;i <= 100;i = i + 2)
	{
		sum1 = sum1 + i;
	}

    int sum2 = 0;
	for(int j = 0;j <= 100;j = j + 2)
	{
		sum2 = sum2 + j;
	}

    cout<<sum1<<endl;
    cout<<sum2<<endl;

	int shuru;
	cin>>shuru;
	char jieguo = 'A';

	for(int k = 2;k < shuru;k++)
	{
		if(shuru % k == 0)
		{
			jieguo = 'B';
			break;
		}
	}
	cout<<jieguo<<endl;

	int taozi = 1;

	for(int l = 0;l <= 8;l = l + 1)
	{
		taozi = taozi + 1;
		taozi = taozi * 2;
	}

	cout<<taozi<<endl;

	int select;
	cin>>select;

    return 0;
}
