#include <stdio.h>
#include<string.h>
int main(void) 
{
float a;
int b;
printf("enter a decimal value:");
scanf("%f",&a);
b=round(a);
printf("%d",b);
return 0;
}
