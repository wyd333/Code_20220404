#include<iostream>
using namespace std;
int main()
{
	
	char c;
	int letters=0;
	int numbers=0;
	int space=0;
	int others=0;
//	����һ���ַ���
	cout << "please input some characters:>" << endl;
	
	c=getchar();
	
//	�ֱ�ͳ�Ƴ����к�  �����ַ��ĸ�����
	while(c != '\n'){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			letters++;//Ӣ����ĸ
		}else if(c>='0' && c<='9'){
			numbers++;//����
		}else if(c==' '){
			space++;//�ո�
		}else{
			others++;
		}
		c=getchar();
	}
	cout << "letters: "<< letters << endl;
	cout << "numbers: "<< numbers << endl;
	cout << "space: "<< space << endl;
	cout << "others: "<< others << endl;
//	����һ���ַ���
//	����ǻ���
//	������
//	�������Ӣ����ĸ�������ո񣬼������֣����������ַ�
//	����һ���ַ���
//	����ǻ���
//	������
//	�������Ӣ����ĸ�������ո񣬼������֣����������ַ�
//	����һ���ַ���
//	����ǻ���
//	������
//	�������Ӣ����ĸ�������ո񣬼������֣����������ַ�
	return 0;
}
