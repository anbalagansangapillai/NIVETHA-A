#include<stdio.h>
int main()
{
 int a,s=0,n;
 printf("enter the a value")
 scanf("%d",&a);
 while(a>0)
{
    n=a%10;
    s=s*10+n;
    a=a/10;
}
printf("%d",s)
    
}
