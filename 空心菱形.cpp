#include <iostream>
using namespace std;
int main()
{
	//	i������
	//	n���м���
	int i,j,n;
	cout << "please input a number:>  "<< endl << endl;
	cin>>n;
	
	//��һ�� n���ո� 1��*
	for(i=1;i<=n;i++)
		cout<<" ";
	cout<<"*"<<endl;
	//2��n��
	for(i=1; i<=n; i++)
	{
		//һ�����������n-i���ո�
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		//Ȼ�����1��* 
		for(j=1; j<=2; j++)
		{
			cout<<"*";
			for(j=1; j<=2*i-1; j++)//*+�ո�+*�ĳ���
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	//�°벿��
	for(i=n-1; i>=1; i--)
	{
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		for(j=1; j<=2; j++)
		{
			cout<<"*";
			for(j=1; j<=2*i-1; j++)
			{
				
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	
	//���һ�� �͵�һ��һ��
	for(i=1;i<=n;i++)
		cout<<" ";
	cout<<"*"<<endl;
	
	return 0;
}
