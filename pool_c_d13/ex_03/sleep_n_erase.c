#include	<unistd.h>
#include	<stdio.h>
#include	<time.h>

void my_putstr(char *str)
{
  int i;
  i=0;
  while (str [i]!= '\0')
    {
      write (1,&str[i],1);
      i++;
      usleep(80000);
    }
  i--;
  while (i >= 0)
    {
      write (1,"\b",1);
      write (1," ",1);
      write (1,"\b",1);
      usleep (80000);
      i--; 
    }
}


int main ()
{
  char *k="On me voit, on m'voit pas, on me voit un peu, on m'voit plus, on m'voit.";
  my_putstr(k);  
  return(0);  
}
