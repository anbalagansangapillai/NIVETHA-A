#include<stdio.h>
void main()
{
    int a,n=0,i;
    printf("enter");
    scanf("%d",&a);
    for(i=0;i<=a;i--)
    {
    while(a!=0)
    {
        n=a%10;
       printf("%d",n); 
         
        a=a/10;
        
      break;   
    }
      
    }

}
