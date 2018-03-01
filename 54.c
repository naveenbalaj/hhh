#include <stdio.h>
int main() 
{
int val,even;
printf("enter the number:");
scanf("%d",&val);
if(val%2==0)
{
even=val-2;	
}
else
{
even=val-1;
}
printf("\n%d",even);
return 0;
}
