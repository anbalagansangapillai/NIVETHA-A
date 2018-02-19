#include<stdio.h>
void main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    while(n%10!=0)
    {
        n++;
        
    }
    printf("multiple of number %d",n);
}
