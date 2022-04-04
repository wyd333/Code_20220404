#include<iostream>
using namespace std;

int main()
{
//	目前世界人口约60亿，
	double people=60.0;
	int i=0;
//	假设每年增长1%，
	
	while(people<80){
		people *= 1.01;
		i++;
	}
	
	cout << i << endl;
	
//	
//	第一年人口60
//	
//	判断是否小于80
//	第二年人口60*1.01
//	
//	判断是否小于80
//	第三年人口60*1.01*1.01
//	判断是否小于80
//	.。。。
//	求多少年后人口达到80亿？
	
	
	
	return 0;	
}
