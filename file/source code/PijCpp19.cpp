#include<iostream>

using namespace std;

struct BLOCKS
{
    int pos[4][4];
};

BLOCKS all[7][4];

void INIT()
{
    for(int m = 0; m < 7; m++)
    {
        for(int n = 0; n < 4; n++)
        {
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    all[m][m].pos[i][j] = 0;
                }
            }
        }
    }
}

void SetOne()
{
	//1
	all[0][0].pos[1][0]=1;
	all[0][0].pos[1][1]=1;
	all[0][0].pos[1][2]=1;
	all[0][0].pos[2][1]=1;

	//2
	all[1][0].pos[1][1]=1;
	all[1][0].pos[2][1]=1;
	all[1][0].pos[3][1]=1;
	all[1][0].pos[3][2]=1;

	//3
	all[2][0].pos[1][2]=1;
	all[2][0].pos[2][2]=1;
	all[2][0].pos[3][2]=1;
	all[2][0].pos[3][1]=1;

	//4
	all[3][0].pos[1][0]=1;
	all[3][0].pos[1][1]=1;
	all[3][0].pos[2][1]=1;
	all[3][0].pos[2][2]=1;

	//5
	all[4][0].pos[1][1]=1;
	all[4][0].pos[1][2]=1;
	all[4][0].pos[2][0]=1;
	all[4][0].pos[2][1]=1;

	//6
	all[5][0].pos[1][1]=1;
	all[5][0].pos[1][2]=1;
	all[5][0].pos[2][1]=1;
	all[5][0].pos[2][2]=1;

	//7
	all[6][0].pos[0][1]=1;
	all[6][0].pos[1][1]=1;
	all[6][0].pos[2][1]=1;
	all[6][0].pos[3][1]=1;

}

void SetAll()
{
    int temp[4][4];
    for(int m = 0; m < 7; m++)
    {
        for(int n = 1; n < 4; n++)
        {
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp[i][j] = all[m][n-1].pos[i][j];
                }
            }

            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    all[m][n].pos[i][j] = temp[3-j][i];
                }
            }
        }
    }
}

void PrintData()
{
    for(int m = 0; m < 7; m++)
    {
        for(int n = 0; n < 4; n++)
        {
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    cout<<all[m][n].pos[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
            cout<<endl;
        }
    }
}

int main()
{
    INIT();
    SetOne();
    SetAll();
    PrintData();

    system("pause");

    return 0;
}
