#include <stdlib.h>
#include <stdio.h>
#include "rubiks.h"
#include <string.h>
#include <unistd.h>

void print_tab(int **floor)
{  
  int dash = 16;
  int pipe = 5;
  int i = 0;
  int v = 0;
  int t = 0;
  int j = 0;
  
  while (i <= dash)
    {  
      write (1, "-", 1);
      i++;
    }
  write (1,"\n",1);
  i=0;
  
  for (t=0 ; t <4 ; t++)
    {
      while (j <4 )
	      {
	        write(1, "| ",2);
	        floor[t][j] += 48;
	        write (1, &floor[t][j],1);
	        floor[t][j] -=48;
	        write (1, " ",1);
	        j++;
	      }
    write (1,"|",1);
    write (1,"\n",1);
    if (j=4)
    	{
	      while (v<=dash)
	        {
	          write (1, "-", 1);
	          v++;
	          j=0;
	        }
	      v=0;
	      write (1,"\n",1);
	    }
    }
}

/*
int main()
  
{
  int **floor = malloc (sizeof (int*) *4);
  
  floor[0] = malloc (sizeof (int) *4);
  floor[1] = malloc (sizeof (int) *4);
  floor[2] = malloc (sizeof (int) *4);
  floor[3] = malloc (sizeof (int) *4);
  
  floor[0][0]=0;
  floor[0][1]=0;
  floor[0][2]=1;
  floor[0][3]=1;
  floor[1][0]=0;
  floor[1][1]=0;
  floor[1][2]=1;
  floor[1][3]=1;
  floor[2][0]=2;
  floor[2][1]=2;
  floor[2][2]=3;
  floor[2][3]=3;
  floor[3][0]=2;
  floor[3][1]=2;
  floor[3][2]=3;
  floor[3][3]=3;

  algo_line(floor, 0);
  algo_column(floor, 1);
  algo_square(floor, 2);

  print_tab(floor);

} */

/*
**  -----------------
**  | 0 | 0 | 1 | 1 |
**  -----------------
**  | 0 | 0 | 1 | 1 |
**  -----------------
**  | 2 | 2 | 3 | 3 |
**  -----------------
**  | 2 | 2 | 3 | 3 |
**  -----------------
*/
