#include<stdlib.h>
#include<stdio.h>

int *my_up(int input)
{
  int	*tab;
  tab = malloc (sizeof (int) *2);
  tab [0] = input;
  tab [1] = input *2;
  return tab;
}

/*
int	main()
{
  int	*output;
  int	input;
  input = 45;
  output = my_up(input);
  printf ("%d\n" "%d\n", output[0], output[1]); 
}
*/