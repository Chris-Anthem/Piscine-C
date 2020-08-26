#include<unistd.h>
#include<stdio.h>

void my_true_loop (unsigned int n)
{
  int i;
  
  for (i = 0 ; i != n ; i++)
    {
      write(1, "+", 1);
    }
  if (i >= n)
    {
      write (1, "\n" , 1);
    }
}


/*
**int main() {
**int n ;
**n = 19;
**my_true_loop(n);
**return 0;
**}
*/