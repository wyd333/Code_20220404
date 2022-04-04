#include<iostream>
using namespace std;

int main(){
	//通过键盘输入两个正整数，求m!+(m+1)!+…+n!（其中1≤m≤n ）
	
	int m,n;
	cout << "please input two numbers:>" << endl;
	cin >> m >> n;
	
	int sum=0;
	int fact;
	for(int i=m;i<=n;i++){
		fact=1;
		for(int j=1;j<=i;j++){
			fact *= j;
		}
		sum += fact;
	
	}
	
	cout << sum;
	
	
	
	
	return 0;
}
