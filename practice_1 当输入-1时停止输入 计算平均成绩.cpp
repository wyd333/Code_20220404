#include<iostream>
using namespace std;

int main()
{
//	ͨ����������������ѧ���ɼ���
//	������-1ʱ��ֹͣ���룬����ƽ���ɼ���
	
	int score;
	double sum,average;
	sum=0;
	cin >> score;
	//����һ��ѧ���ɼ�
	int i=0;
	while(score != -1){
		sum += score;
		i++;
		cin >> score;
	}
	average=sum/i;
	cout << average;

//	����ƽ���ɼ�
//	ƽ���ɼ�=�ܺ�/����ĸ���

	
	
//	����100 
//	
//	�жϲ���-1 
//	������
//	����99
//	
//	�жϲ���-1 
//	������
//	����23 
//	�жϲ���-1 
//	������
//	-1 ��-1 ���� ��ƽ��

	return 0;
}
