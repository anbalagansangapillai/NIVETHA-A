

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   char s, i[100], o[100];
   int no[26] = {0}, n, c, t, x;
 
   printf("Enter some text\n");
   scanf("%s", i);
 
   n = strlen(i);
 
  
   for (c = 0; c < n; c++)
   {
      s = i[c] - 'a';
      no[s]++;
   }
 
   t = 0;
 
  
   for (s = 'a'; s <= 'z'; s++)
   {
      x = s - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         o[t] = s;
         t++;
      }
   }
   output[t] = '\0';
 
   printf("%s\n", output);
 
   return 0;
}
