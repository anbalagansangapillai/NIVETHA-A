#include<stdio.h>
void main()
{
char s[10]="niv";
int flag=0,i;
for(i=0;s[i]!='\0';i++)
{
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
{
flag=1;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
}
