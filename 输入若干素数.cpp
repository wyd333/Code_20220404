#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000],i=0,c=0;
	char b;
	do {
		scanf("%d%c",&a[i],&b);
		i++;
	}while(b != 10);//输入若干个数直到换行结束  
	for(int j=0;j<i;j++)//对若干个数进行判断 
	{
		if(a[j]>1)
		{
			int s=sqrt(a[j]),judge=1;
			for(int k=2;k<=s;k++)
			{
				if(a[j]%k==0&&a[j]!=2)//满足条件为合数
				{ 
					judge=0;
					break;
				}
			}
			if(judge)
			{
				printf("%d",a[j]);
				c++;
				if(c%5==0)printf("\n");
				else printf(" ");
			}
		}
		else printf("输入的值不是除了1之外的正整数");
	}
	return 0;
} 
