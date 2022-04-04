#include<iostream>
using namespace std;

int main()
{
//	找出100~200间不能被3整除的数
//	int num;
//	如果一个数不能被3整除
//	输出
	
	for(int num=100;num<201;num++){
		if(num%3 != 0){
			cout << num << endl;
		}
	}

	return 0;	
}
