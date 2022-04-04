#include<iostream>
using namespace std;

int main()
{
//	通过键盘连续输入多个学生成绩，
//	当输入-1时，停止输入，计算平均成绩。
	
	int score;
	double sum,average;
	sum=0;
	cin >> score;
	//输入一个学生成绩
	int i=0;
	while(score != -1){
		sum += score;
		i++;
		cin >> score;
	}
	average=sum/i;
	cout << average;

//	计算平均成绩
//	平均成绩=总和/输入的个数

	
	
//	输入100 
//	
//	判断不是-1 
//	继续加
//	输入99
//	
//	判断不是-1 
//	继续加
//	输入23 
//	判断不是-1 
//	继续加
//	-1 是-1 跳出 算平均

	return 0;
}
