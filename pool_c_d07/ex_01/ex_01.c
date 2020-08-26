#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void my_putchar (char str)
{
  write (1, &str, 1);
}

void my_putstr (char *str)
{
  int i;
  i=0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}


int main (int argc, char **argv)
{
  int i;

  if (argc == 1)
	{
	  my_putstr("\n");
  }

  else
	{
	  for(i=1; i<argc; i++)
	  {
		  my_putstr(argv[i]);
		  my_putstr("\n");
	  }
	}   
     
  return (0);
}
