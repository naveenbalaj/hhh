#include <stdio.h>
#include<math.h>
int main() 
{
int a,b,c,d;
printf("enter a numbers:");
scanf("%d%d",&a,&b);
c=a*b;
printf("%d",c);
sqrt(c);
if(sqrt(c)==c%2)
printf("yes");
else
printf("no");
return 0;
}
