#include<stdio.h>
void main()
{
    int a,n[20],sum=0,i;
    printf("enter");
    scanf("%d",&a);
    printf("enter");
    for(i=0;i<=a;i++)
    {
    scanf("%d",&n[i]);
    }
    for(i=0;i<=a;i++)
    {
        sum=sum+n[i];
    }
    printf("%d",sum);
}
