#include<iostream>
using namespace std;

int main()
{
//	�Ӽ�����������10�������ҳ�10�����е����������С��
	int x,max,min;
	cin >> x;
	//��һ����������
	max=x;
	min=x;
	
	
	for(int i=0;i<9;i++){
		cin >> x;//����ڶ�����
		if(x>max){
			max=x;
		}
		if(x<min){
			min=x;
		}
//		��ô�ڶ�����������
//		�����������
		
	}
	cout << "max is:" << max << "min is:" << min << endl;

	
	
//	������������ȵ�һ������
//	��ô��������������
//	������ĸ���
//	������ĸ����ȵ�һ������
//	��ô���ĸ���������
//	��������
//	
	return 0;	
}
