#include <stdio.h>
int main(void) 
{
char a[10];
int k,i;
printf("enter the string and the k value:");
scanf("%s %d",a,&k);
for(i=0;i<k;i++)
{
printf("\n%c",a[i]);
}
return 0;
}
