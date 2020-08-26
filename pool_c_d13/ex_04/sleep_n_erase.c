#include	<unistd.h>
#include	<stdio.h>
#include	<time.h>

void my_putstr(char *str)
{
  int i;
  i = 0;
  while (str [i]!= '\0')
    {
      write (1,&str[i],1);
      i++;
      usleep(80000);
    }
  i--;
  write (1,"\r",1);
  while (i >= 0)
    {
      write (1," ",1);
      //write (1,"\b",1); (crash avec ./a.out cat-e \r)
      usleep (90000);
      i--;
    }
    write (1,"\n",1);
}


int main ()
{
  char *k="On me voit, on m'voit pas.";
  my_putstr(k);  
  return(0);  
}
