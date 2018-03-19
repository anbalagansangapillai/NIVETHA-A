#include <stdio.h>

void main() 
{
	int a,b,i,count=0, s[10];
	printf("enter a,b");
	scanf("%d %d",&a,&b);
		for(i=0;i<a;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==b)
		{
			
			count=count+1;
		
		}
		
	}
	printf("%d",count);
	return 0;
}
