#include<iostream>

using namespace std;

int main()
{
	int a[114];

	//����
	for(int i = 0; i < 114; i++)
	{
		a[i] = 0;
	}

	while(true)
	{
		cout<<"��������Ҫִ�еĲ���:"<<endl;
		cout<<"1:�������"<<endl;
		cout<<"2:ɾ������"<<endl;
		cout<<"3:�޸�����"<<endl;
		cout<<"4:��������"<<endl;
		cout<<"5:�˳�"<<endl;
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
					cout<<"������Ҫ��ӵ�����"<<endl;
					cin>>sya;
					if(sya > 114)
					{
						cout<<"��������"<<endl<<endl;
						break;
					}
					else if(a[sya - 1])
                    {
                        cout<<"Ŀ�����ѱ���������ռ��"<<endl;
                        break;
                    }
					else
					{
						cout<<"����Ҫ��ӵ�ֵ"<<endl;
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
					cout<<"������Ҫɾ��������"<<endl;
					cin>>syb;
					if(syb > 114)
					{
						cout<<"��������"<<endl;
						break;
					}
					else if(!(a[syb - 1]))
					{
						cout<<"Ŀ����Ϊ��"<<endl;
						break;
					}
					else
					{
						cout<<"ɾ����"<<a[syb - 1]<<endl;
						a[syb - 1] = 0;
						cout<<"ɾ���ɹ�"<<endl;
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
					cout<<"������Ҫ���ҵ����ݱ��"<<endl;
					cin>>sy;
					if(sy > 114)
					{
						cout<<"��������"<<endl;
						break;
					}
					else if(!(a[sy - 1]))
                    {
                        cout<<"��Ϊ��"<<endl;
                        break;
                    }
					else
					{
						cout<<"ֵΪ"<<a[sy - 1]<<endl;
						cout<<"���ҳɹ�"<<endl;
						break;
					}
				}
				break;

			case 5:
				cout<<"bey bey"<<endl;
				flag = true;
				break;

			default:
				cout<<"�������";
				break;
		}
		if(flag == true)
		{
			break;
		}
	}

	return 0;
}
