#include <iostream>
using namespace std;
int main()
{
	//	i是行数
	//	n是中间行
	int i,j,n;
	cout << "please input a number:>  "<< endl << endl;
	cin>>n;
	
	//第一行 n个空格 1个*
	for(i=1;i<=n;i++)
		cout<<" ";
	cout<<"*"<<endl;
	//2到n行
	for(i=1; i<=n; i++)
	{
		//一行里面先输出n-i个空格
		for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		//然后输出1个* 
		for(j=1; j<=2; j++)
		{
			cout<<"*";
			for(j=1; j<=2*i-1; j++)//*+空格+*的长度
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	//下半部分
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
	
	//最后一行 和第一行一样
	for(i=1;i<=n;i++)
		cout<<" ";
	cout<<"*"<<endl;
	
	return 0;
}
