#include	<unistd.h>
#include	<stdio.h>
#include	<time.h>

void my_putstr(char *str)
{
  int i;  
  i=0;
  
  while (str[i] != '\0')
    {
      i++;
    }
  i--;
  while (0<=i)
    {
      write (1,&str[i],1);
      i--;
      usleep(88000);
    }
}


int main ()
{ 
  char *k="\nTu l'as trop ecrase, Cesar, ce Port-Salut.\n: emordnilap";
  my_putstr(k);  
  return(0);
} 
