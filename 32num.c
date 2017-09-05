#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, n;
 
    printf("enter\n");
    scanf("%[^\n]s", s);
    for (n= 0;s[n] != '\0';n++)
    {
        if (s[n] == ' ')
            count++;    
    }
    printf("number of words: %d\n", count + 1);
}
