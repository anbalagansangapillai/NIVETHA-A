#include <stdio.h>
int main()
{
    int i,  t = 0, c = 1,s;
 
 
    for (i = 0; i <= 5; ++i)
    {
        printf("%d ", t);
        s= t + c;
        t = c;
        c = s;
    }
    return 0;
}
