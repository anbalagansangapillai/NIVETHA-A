#include <stdio.h>

int main(){

   char c;
   unsigned int long linec, wordc, charc;
   int u;
   linec=0;
   wordc=0;
   charc=0;


   while((c=getc(stdin))!=EOF){


       if (c !='\n') {++charc;}
       if (c==' ' || ch=='\n') {++wordc;}
       if (c=='\n') {++linec;}

     }
   if(charc>0){
      ++wordc;
      ++linec;
   }

   printf( "%lu %lu %lu\n", char, wordc, linec );

   return 0;

}
