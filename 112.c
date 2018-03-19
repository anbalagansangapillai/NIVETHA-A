#include<stdio.h>
void main()
{
    int a,b,s[10],i,count=0;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    printf("enter");
    for(i=0;i<a;i++)
    {
        scanf("%d",&s);
    }
    for(i=0;i<a;i++)
    {
        if(s[i]==b)
        {
           printf("yes");
        }
    }
}
