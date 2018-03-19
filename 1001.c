#include<stdio.h>
void main()
{
    int a,b,i,n=0;
    printf("enter");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        n=a%10;
        printf("%d",n);
    }
    
}
