#include <stdio.h>

int toupper(int c);

void alpha()
{
   int i = 0;

   char str[] = "abCdEfGhIJkLmNOPqRSTuVwxyz\n";
   
   while(str[i]) {
      putchar (toupper(str[i]));
      i++;
   }
}
  
/*
**int main() {
**alpha ();
**return (0);
**}  
*/
