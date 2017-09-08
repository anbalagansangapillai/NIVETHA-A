#include <stdio.h>
int main()
{
      double firstNum, secondNum, temporaryVar;

      printf("Enter first num: ");
      scanf("%lf", &firstNum);

      printf("Enter second num: ");
      scanf("%lf",&secondNum);
      temporaryVar= firstNum;
      firstNum= secondNum;
      secondNum = temporaryVar;

      printf("\nAfter swapping, firstNum = %.2lf\n", firstNum);
      printf("After swapping, secondNumb = %.2lf", secondNum);

      return 0;
}
