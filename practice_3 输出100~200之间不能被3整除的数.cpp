#include<iostream>
using namespace std;
int main(){
	//���100--200���ܱ�3��������
	int i,j;
	j=0;
	for(i=100;i<=200;i++){
		if(i%3==0)
			continue;
		else{
			j++;//������
			if(j%5==0){
				cout << endl;
			}
			cout << i << " " <<"��"<< j <<")";
		}
	}
	return 0;	
}
