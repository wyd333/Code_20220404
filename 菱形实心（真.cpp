#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
//	i是行数
//	n是行数的一半 n+1是中间行
//	
//	n=5的时候
//	第1行 2个空格  1个*
//	第2行 1个空格  3个*
//	第3行 0个空格  5个*
//	
//	第i行 n+1-i个空格  2*i-1个*
//	输出前半段
	cout << "please input a number:>  "<< endl << endl;
	cin >> n;
	for(i=1;i<=n+1;i++){
		//一行里面 输出n+1-i个空格 
		for(j=1;j<=n+1-i;j++){
			cout << " ";
		}
		//再输出2*i-1个*
		for(k=1;k<=2*i-1;k++){
			cout << "*";
		}
	//再换行
		cout << endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n+1-i;j++){
			cout << " ";
		}
		//再输出2*i-1个*
		for(k=1;k<=2*i-1;k++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
