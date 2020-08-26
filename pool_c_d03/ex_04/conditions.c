#include <unistd.h>

void conditions (int n)
{
  if (n<0)
    {
      write (1,"-", 1);
    }
  
  else if (n==0)
    {
      write (1,"0",1);
    }
  
  else if (n>0)
    {
      write (1,"+",1);
    }
 
}

/*
**int main () {
**conditions (-564);
**conditions (564);
**conditions (0);
**return 0;
**}
*/