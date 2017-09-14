#include<stdio.h>
void main(void)
{
  char str1[25],str2[25];
  int a=0,n=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  while(str1[a]!='\0')
  a++;
  while(str2[n]!='\0')
  {
    str1[a]=str2[n];
    n++;
    a++;
  }
  str1[a]='\0';
  printf("\nConcatenated String is %s",str1);
}
