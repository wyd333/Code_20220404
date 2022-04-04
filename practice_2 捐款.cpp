#include<iostream>
using namespace std;
int main(){
//	在全系1000人中举行捐款，当总数达到10万元时就结束，统计此时捐款的人数以及平均每人捐款的数目。
	double money,sum;
	sum = 0;
	int i=0;
	while(sum<100000){
		cout << "please enter the donation amount:>" << endl;
		cin >> money;
		sum += money;
		i++;
	}
	double average;
	average = sum/i;
	cout << "Number of donors:" << i << endl;
	cout << "Average of donations per person: " << average << endl;
	
//	如果捐的钱总数达到100000
//	不干了
//	人来捐钱
//	如果捐的钱总数达到100000
//	不干了
//	人来捐钱
//	如果捐的钱总数达到100000
//	不干了
	
	
	return 0;
}
