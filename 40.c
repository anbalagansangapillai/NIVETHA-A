#include <stdio.h>
int main()
{
    int i, n, p1 = 0, p2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", p1);
        nextTerm = p1 + p2;
        p1 = p2;
        p2 = nextTerm;
    }
    return 0;
}
