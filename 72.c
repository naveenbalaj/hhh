#include<stdio.h>
#include<string.h>
int main(void) 
{
char string[10];
int i=0,count=0,flag=0;
printf("\n enter the given string:");
scanf("%s",string);
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
printf("\nvowel");
}
else
{
printf("\n not vowel");
}
return 0;
}
