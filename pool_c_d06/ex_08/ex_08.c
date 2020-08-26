#include<stdio.h>

int	posQueens [8] = {0} ;
int	solution=0;

int	abs(int n)
{
  return n<0 ? -n : n;
}

void recursive (int Queens)
{
  if (Queens ==8)
    {
      for (int i=0; i<8 ; ++i)
	{
	  for(int j=0; j<8; ++j)
	    if (j==posQueens[i]) printf ("1");
	    else printf("0");
	  printf("\n");
	}
      printf("\n\n");
      ++solution;
    }
  for(int i=0; i<8; ++i)
    {
      for(int j=0; j<Queens; ++j)
	if(posQueens[j]==i || (abs(posQueens[j]-i)== abs (j-Queens)))
	  goto next;
      posQueens[Queens]=i;
      recursive (Queens+1);
    next: continue;
    }
  return;
}

int	main(int argc, char*argv[])
{
  recursive(0);
    printf("\nNombre de solutions: %d\n", solution);
  return 0;
}
