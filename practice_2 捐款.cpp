#include<iostream>
using namespace std;
int main(){
//	��ȫϵ1000���о��о��������ﵽ10��Ԫʱ�ͽ�����ͳ�ƴ�ʱ���������Լ�ƽ��ÿ�˾�����Ŀ��
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
	
//	������Ǯ�����ﵽ100000
//	������
//	������Ǯ
//	������Ǯ�����ﵽ100000
//	������
//	������Ǯ
//	������Ǯ�����ﵽ100000
//	������
	
	
	return 0;
}
