#include<iostream>
using namespace std;
int main(){
	//输出矩阵
	int n;//n是总行数
	int i;//第i行
	cout << "please enter the rows:  ";
	cin >> n;
	for(i=1;i<=n;i++){
		int j,num;
		for(j=1;j<=5;j++){
			num = j*i;
//			if(i==3 && j==1){
//				break;
//			}
//			跳过第三行输出
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
