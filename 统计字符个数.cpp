#include<stdio.h>
int main()
{
//	�����������ɸ�����
//	�ж���Щ���Ƿ���������
//	����
//	����������.һ�����5����
	int a[100];
	int num=0;
	int i=0;
	char b;
//	����һ����
	do {
		scanf("%d%c",&a[i],&b);
		i++;
	}while(b != 10);//�������ɸ���ֱ�����н���	
//	�����ж�
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
//	if(a[i]������)
//	cout
//	if(���������num%5==0)
//	\n
//	else
//	cout space
return 0;	
}
