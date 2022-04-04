#include<iostream>
using namespace std;

int main()
{
//	从键盘连续输入10个数，找出10个数中的最大数和最小数
	int x,max,min;
	cin >> x;
	//第一个数是最大的
	max=x;
	min=x;
	
	
	for(int i=0;i<9;i++){
		cin >> x;//输入第二个数
		if(x>max){
			max=x;
		}
		if(x<min){
			min=x;
		}
//		那么第二个数是最大的
//		输入第三个数
		
	}
	cout << "max is:" << max << "min is:" << min << endl;

	
	
//	如果第三个数比第一个数大
//	那么第三个数是最大的
//	输入第四个数
//	如果第四个数比第一个数大
//	那么第四个数是最大的
//	。。。。
//	
	return 0;	
}
