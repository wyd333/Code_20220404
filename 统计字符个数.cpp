#include<stdio.h>
int main()
{
//	任意输入若干个数，
//	判断这些数是否是素数，
//	若是
//	则输出这个数.一行输出5个数
	int a[100];
	int num=0;
	int i=0;
	char b;
//	输入一个数
	do {
		scanf("%d%c",&a[i],&b);
		i++;
	}while(b != 10);//输入若干个数直到换行结束	
//	素数判断
	for(int j=0;j<i;j++){
		if(a[j]>1){	
			int end = a[j]/2;
			int k;
			for(k=2;k<=end;k++){
				if(a[j]%k==0)
				{ 
					break;
				}
			}
			if(k>end){
				printf("%d",a[j]);
				num++;
				if(num%5==0){
					printf("\n");
				}
				else{
					printf(" ");
				}			
			}
		}else{
			printf("error");
		}
	}
//	if(a[i]是素数)
//	cout
//	if(这个素数的num%5==0)
//	\n
//	else
//	cout space
return 0;	
}
