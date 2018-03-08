#include <stdio.h>
int main()
{
int n,m,c;
printf("value of n,m:");
scanf("%d%d",&n,&m);
c=n+m;
printf("%d",c);
if(c%2==0)
printf("\n even");
else
printf("odd");
}
