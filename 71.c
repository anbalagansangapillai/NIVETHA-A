#include<stdio.h>
void main()
{
    int n,r,a=0,v;
    printf("enter the n value");
    scanf("%d",&n);
    v=n;
    while(n>0)
    {
        r=n%10;
        a=a*10+r;
        n=n/10;
        
        
    }
    if(v==a)
    {
        printf("palindrome");
        
    }
    else
    {
    printf("  not palindrome");
    }
    
}
