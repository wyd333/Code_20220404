#include<iostream>
using namespace std;

int main()
{
//	输出100以上1000以内
//	所有个位数字与十位数字之和被10除
//	所得余数恰是百位数字的数（如293）。
	int ge,shi,bai;
	int num;

	
	for(num=100;num<1000;num++){
		ge=num%10;
		shi=num/10%10;
		bai=num/100%10;
		if(bai==(ge+shi)%10){
			cout << num << " ";
		}
	}
	
	return 0;	
}
//
//要把各个数位上的数字取出来
//
//
//如果100符合条件
//输出
//如果101符合条件
//输出
//如果102符合条件
//输出
//。。。
