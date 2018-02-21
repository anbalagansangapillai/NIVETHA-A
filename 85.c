#include<stdio.h>
void main()
{
char a[5]={'g','e','f','d','s'};
int i;
for(i=1;i<=5;i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}
}
for(i=1;i<=5;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
}

