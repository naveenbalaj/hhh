#include<stdio.h>
int main()
{
	int n,i,num1,num2,num3;
	printf("number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num1=pow(2,i);
		if(num1>n)
		{
			num2=i;
			break;
		}
	}
	num3=pow(2,num3);
	printf("\n%d",num3);
	
	return 0;
}
