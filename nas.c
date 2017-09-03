#include <stdio.h>

#define MAX_SIZE 100 

int main()

{

    char string[MAX_SIZE];

    int alpha, digits, others, i;
    alpha= digits = others = i = 0;


    printf("Enter any string : ");

    gets(string);

    while(string[i]!='\0')

    {

        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))

        {

            alpha++;

        }

        else if(string[i]>='0' && string[i]<='9')

        {

            digits++;

        }

        else

        {

            others++;

        }

        i++;

    }

    printf("Alpha = %d\n", alpha);

    printf("Digits = %d\n", digits);

    printf("Special char = %d\n", others);

    return 0;

}
