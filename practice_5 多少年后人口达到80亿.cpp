#include<iostream>
using namespace std;

int main()
{
//	Ŀǰ�����˿�Լ60�ڣ�
	double people=60.0;
	int i=0;
//	����ÿ������1%��
	
	while(people<80){
		people *= 1.01;
		i++;
	}
	
	cout << i << endl;
	
//	
//	��һ���˿�60
//	
//	�ж��Ƿ�С��80
//	�ڶ����˿�60*1.01
//	
//	�ж��Ƿ�С��80
//	�������˿�60*1.01*1.01
//	�ж��Ƿ�С��80
//	.������
//	���������˿ڴﵽ80�ڣ�
	
	
	
	return 0;	
}
