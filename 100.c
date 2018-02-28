#include<stdio.h>
void main()
{
    int sum=1,n,i,a;
    printf("enter");
   scanf("%d",&n);
   while(n!=0)
   {
       
   a=n%10;
   sum=sum*a;
   n=n/10;
        
         
    }
   printf("%d",sum);
}
