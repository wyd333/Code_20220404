#define ARR_SIZE 10
#include<iostream>
using namespace std;
int main(){
	int i,j;
	int a[ARR_SIZE];
	for(i=0;i<ARR_SIZE;i++){
		cin >> a[i];
	}
	
	for(i=0;i<ARR_SIZE-1;i++){
		for(j=0;j<ARR_SIZE-1-i;i++){
			if(a[j]>a[j+1]){
				int tmp;
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}

	for(i=0;i<ARR_SIZE;i++){
		cout << a[i] << "<";
	}
	
	return 0;
}
