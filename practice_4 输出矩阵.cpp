#include<iostream>
using namespace std;
int main(){
	//�������
	int n;//n��������
	int i;//��i��
	cout << "please enter the rows:  ";
	cin >> n;
	for(i=1;i<=n;i++){
		int j,num;
		for(j=1;j<=5;j++){
			num = j*i;
//			if(i==3 && j==1){
//				break;
//			}
//			�������������
			if(i==3 && j==1){
				continue;
			}
			cout << num << " ";
			if(j==5){
				cout << endl;
			}
		}
	}
	
	
	return 0;	
}
