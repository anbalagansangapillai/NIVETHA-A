#include <stdio.h>

 

void main()

{

    long n, temp, digit, s = 0;

 

    printf("Enter the number \n");

    scanf("%ld", &n);

    temp = n;

    while (n> 0)

    {

        digit = n % 10;

        s = s+ digit;

        n/= 10;

    }

    printf("Given number = %ld\n", temp);

    printf("Sum of the digits %ld = %ld\n", temp, s);

}
