#include<stdio.h>
int hcf(int x,int y);
void main()
{
    int n,b,d;
    clrscr();
    printf("Enter: ");
    scanf("%d%d",&n,&b);
    if(a>b)
      {
           d=hcf(n,b);
      }
    else
     {
           d= hcf(b,n);
     }
           printf("HCF is= %d",d);
           getch();
}
    int hcf(int x,int y)
    {
       int r=1;
       while(r!=0)
          {
               r=x%y;
               x=y;
               y=r;
          }
               return(x);
    } 
