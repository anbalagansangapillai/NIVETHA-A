#include <stdio.h>
void main()
{
	int n=3,temp=0;
	int a[]={'2','6','9'};
	for(i=0;i<=3;i++)
	{
		for(j=1;j<=2;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		printf("%d",a[0]);
		
	}
	printf("%d",a[2]);
}
