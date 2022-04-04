#define ARR_SIZE 10
#include<iostream>
using namespace std;

int main(){
	int a[ARR_SIZE],i;
	for(i=0;i<ARR_SIZE;i++){
		a[i]=i+1;
	}
	int tmp;
	for(i=0;i<ARR_SIZE/2;i++){
		tmp=a[i];
		a[i]=a[ARR_SIZE-1-i];
		a[ARR_SIZE-1-i]=tmp;
	}
	
	
	for(i=0;i<ARR_SIZE;i++){
		cout << a[i] << ",";
	}
	
	return 0;
}
