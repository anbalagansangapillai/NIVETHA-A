#include<stdio.h>
void main()
{
char a[4]={'\0','a','1','n'};
int i;
for(i=0;i<=4;i++)
{
if((i<=0)&&(i>=9))
{
printf("%d",a[i]);
}
}
}
