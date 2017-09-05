#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int n= 0, l = 0, f = 1;
   clrscr();
   puts("Enter\n");
   gets(str);
   for(n = 0; str[n] !='\0'; n++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(n = 0; n <= l-1; n++)
   {
      if(str[n] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
}
