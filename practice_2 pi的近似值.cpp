#include<iostream>
using namespace std;
int main(){
	int n;
	double num,sum,result;
	sum = 0;
	cout << "请输入一个数，计算pi的近似值" << endl;
	cin >> n;
	int sign;
	sign = 1;
	for(int j=1;j<=n;j++){
		num = sign*(1.0/(2*j-1));
		sum += num;
		sign = -sign;
	}

	result = 4*sum;
	
	cout << "pi ≈ "<< result << endl;
	
	return 0;
}
