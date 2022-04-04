#include<iostream>
using namespace std;
int main()
{	int i,n,j,k;
	cout<<"请输入一个数字:"<<endl;
	cin>>n;
	for(i=-n;i<=n;i++)
	{

		
		for(j=1;j<=n-2*abs(i);j++)
			
			cout<<"*";
		cout<<endl;
		
	}
	
	return 0;
}
