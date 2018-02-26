#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	int i;
	printf("enter");
	scanf("%s",&a);
	
	for(i=0;i<=3;i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
		{
			printf("%c",a[i]);
		}
	}
}
