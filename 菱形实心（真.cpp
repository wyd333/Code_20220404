#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
//	i������
//	n��������һ�� n+1���м���
//	
//	n=5��ʱ��
//	��1�� 2���ո�  1��*
//	��2�� 1���ո�  3��*
//	��3�� 0���ո�  5��*
//	
//	��i�� n+1-i���ո�  2*i-1��*
//	���ǰ���
	cout << "please input a number:>  "<< endl << endl;
	cin >> n;
	for(i=1;i<=n+1;i++){
		//һ������ ���n+1-i���ո� 
		for(j=1;j<=n+1-i;j++){
			cout << " ";
		}
		//�����2*i-1��*
		for(k=1;k<=2*i-1;k++){
			cout << "*";
		}
	//�ٻ���
		cout << endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n+1-i;j++){
			cout << " ";
		}
		//�����2*i-1��*
		for(k=1;k<=2*i-1;k++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
