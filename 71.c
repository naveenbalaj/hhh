#include <stdio.h>
#include<string.h>
int main() 
{
	char a[50];
	int n;
	printf("enter the string:");
	scanf("%s",a);
	n=strrev(a);
	if(a==n)
	printf("\nyes");
	else
	printf("\n no");
	return 0;
}
