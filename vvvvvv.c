
#include <stdio.h>
int gcd(int a, int b)
{ 
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int n = 98, m = 56;
    printf("GCD of %d and %d is %d ", n, m, gcd(n, m));
    return 0;
}


