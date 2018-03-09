#include <stdio.h>
int main()
{
int a,b,c;
printf("value of a,b");
scanf("%d%d",&a,&b);
c=a-b;
printf("%d",c);
if(c%2==0)
printf("even");
else
printf("odd");
return 0;
}


