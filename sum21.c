#include <stdio.h>
int main()
{
    long lng n;
    int cou = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        n /= 10;
        ++cou;
    }

    printf("Number of digits: %d", cou);
}
