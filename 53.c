#include <stdio.h>
int main() 
{
int val,temp,sum=0;
printf("enter the number");
scanf("%d",&val);
temp=val;
while(val!=0)
{
temp=val%10;
sum=sum+val;
val=val/10;
}
printf("\n%d",sum);
return 0;
}
