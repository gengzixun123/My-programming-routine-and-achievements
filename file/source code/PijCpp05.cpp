#include<iostream>

using namespace std;

int main()
{
	int a[114];

	//清零
	for(int i = 0; i < 114; i++)
	{
		a[i] = 0;
	}

	while(true)
	{
		cout<<"请输入你要执行的操作:"<<endl;
		cout<<"1:添加数据"<<endl;
		cout<<"2:删除数据"<<endl;
		cout<<"3:修改数据"<<endl;
		cout<<"4:查找数据"<<endl;
		cout<<"5:退出"<<endl;
		int select;
		cin>>select;
		bool flag = false;

		switch(select)
		{
			case 1:
				int sya;
				int inputa;
				while(true)
				{
					cout<<"输入你要添加的项编号"<<endl;
					cin>>sya;
					if(sya > 114)
					{
						cout<<"索引过大"<<endl<<endl;
						break;
					}
					else if(a[sya - 1])
                    {
                        cout<<"目标项已被其他数据占用"<<endl;
                        break;
                    }
					else
					{
						cout<<"输入要添加的值"<<endl;
						cin>>inputa;
						a[sya - 1] = inputa;
						break;
					}
				}
				break;

			case 2:
				int syb;
				while(true)
				{
					cout<<"输入你要删除的项编号"<<endl;
					cin>>syb;
					if(syb > 114)
					{
						cout<<"索引过大"<<endl;
						break;
					}
					else if(!(a[syb - 1]))
					{
						cout<<"目标项为空"<<endl;
						break;
					}
					else
					{
						cout<<"删除了"<<a[syb - 1]<<endl;
						a[syb - 1] = 0;
						cout<<"删除成功"<<endl;
						break;
					}
				}
				break;
			case 3:
				break;
			case 4:
				for(int i = 0; i<114; i++)
				{
					cout<<a[i]<<"\t";
				}
				cout<<endl;
				int sy;
				while(true)
				{
					cout<<"输入你要查找的数据编号"<<endl;
					cin>>sy;
					if(sy > 114)
					{
						cout<<"索引过大"<<endl;
						break;
					}
					else if(!(a[sy - 1]))
                    {
                        cout<<"项为空"<<endl;
                        break;
                    }
					else
					{
						cout<<"值为"<<a[sy - 1]<<endl;
						cout<<"查找成功"<<endl;
						break;
					}
				}
				break;

			case 5:
				cout<<"bey bey"<<endl;
				flag = true;
				break;

			default:
				cout<<"输入错误";
				break;
		}
		if(flag == true)
		{
			break;
		}
	}

	return 0;
}
