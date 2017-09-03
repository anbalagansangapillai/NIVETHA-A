#include<stdio.h>
 
int calculateSum(int);
 
int main() {
   int i, n;
   int result;
 
   printf("Input: ");
   scanf("%d", &n);
 
   result = calculateSum(n);
   printf("\nSum of Number From 1 to %d : %d", n, result);
 
   return (0);
}
 
int calculateSum(int n) {
   int res;
   if (n== 1) {
      return (1);
   } else {
      res = n + calculateSum(n - 1);
   }
   return (res);
}
