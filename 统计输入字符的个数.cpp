#include<iostream>
using namespace std;
int main()
{
	
	char c;
	int letters=0;
	int numbers=0;
	int space=0;
	int others=0;
//	输入一行字符，
	cout << "please input some characters:>" << endl;
	
	c=getchar();
	
//	分别统计出其中和  其它字符的个数。
	while(c != '\n'){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			letters++;//英文字母
		}else if(c>='0' && c<='9'){
			numbers++;//数字
		}else if(c==' '){
			space++;//空格
		}else{
			others++;
		}
		c=getchar();
	}
	cout << "letters: "<< letters << endl;
	cout << "numbers: "<< numbers << endl;
	cout << "space: "<< space << endl;
	cout << "others: "<< others << endl;
//	输入一个字符，
//	如果是换行
//	不干了
//	否则计数英文字母，计数空格，计数数字，计数其他字符
//	输入一个字符，
//	如果是换行
//	不干了
//	否则计数英文字母，计数空格，计数数字，计数其他字符
//	输入一个字符，
//	如果是换行
//	不干了
//	否则计数英文字母，计数空格，计数数字，计数其他字符
	return 0;
}
