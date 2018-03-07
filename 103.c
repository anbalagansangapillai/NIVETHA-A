#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="i love c";
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0 || a[i]==" ")
        {
          printf("%s",a[i]-32);   
        }
        
    }
}
