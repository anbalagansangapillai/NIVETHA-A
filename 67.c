#include<stdio.h>
void main()
{
    int s;
    printf("enter");
    scanf("%d",&s);
    while(s%10!=0)
    {
        s++;
        
    }
    printf("multiple of number %d",s);
}
