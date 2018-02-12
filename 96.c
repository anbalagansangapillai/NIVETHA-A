#include<stdio.h>
int main()
{
int i,a,m;
printf("enter");
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(a%i==0)
{
m=i;
}
}
if(m>1)
{
printf("yes");
}
else
{
printf("no");
}
}
