#include <stdio.h>
int main()
{
    int N,M,a;
    printf("number N,M:");
    scanf("%d%d",&N,&M);
    a=N*M;
    printf("value of a%d",a);
    if(a%2==0)
    printf("\neven");
    else
    printf("\nodd");

    return 0;
}

