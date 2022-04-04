#include<iostream>
using namespace std;
int main(){
	//输出100--200不能被3整除的数
	int i,j;
	j=0;
	for(i=100;i<=200;i++){
		if(i%3==0)
			continue;
		else{
			j++;//计数器
			if(j%5==0){
				cout << endl;
			}
			cout << i << " " <<"（"<< j <<")";
		}
	}
	return 0;	
}
