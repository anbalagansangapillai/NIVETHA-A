#include<stdio.h>
void main()
{
    int p,n,r,m;
    int floorval;
    printf("enter");
    scanf("%d%d%d",&p,&n,&r);
    m=(p*n*r)/100;
    floorval=floor(m);
    printf("%d",floorval);
}
