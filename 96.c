#include<stdio.h>
int main()
{
int i,n,f;
printf("enter");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
f=i;
}
}
if(f>1)
{
printf("composite");
}
else
{
printf("not composite");
}
}
