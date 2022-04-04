#include<iostream>
using namespace std;
int main(){
	int n,a;
	cout << "please input n,a in sequence:>"<< endl;
	cin >> n >> a;
	int i;
	int t=1;
	int sum;
	sum = 0;
	for(i=1;i<=n;i++){
		t *= a;
		sum += t;
	}
	cout << "Sum = " << sum << endl;
	return 0;
}
