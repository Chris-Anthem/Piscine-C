#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_unique(int *array, int size)
{
  int i;
  int j;
  i=0;
  for (i=0; i<size; i++)
    {
      j=0;
      while ((j == i) || (array[i] != array[j]) && j<size)
	{
	  j++;
	}
      if (j == size)
	{
	  printf("%d",array[i]);
	}
      if (j == size && i<size-1)
	{
	  printf("%s",",");
	}
    }
  
  printf("%s","\n");
}

/*
**int main ()
**{
**int tab [] = {0, 0, 2, 3, 4, 3, 6, 1};
**print_unique(tab, 8);
**return (0);
**}
*/
