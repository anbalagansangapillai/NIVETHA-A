#include<stdio.h>
int main()
{
  int N, i, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &N);
  
  for(i = 1; i <= N; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}
