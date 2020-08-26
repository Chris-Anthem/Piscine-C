#include<stdio.h>
#include<stdlib.h>

void	my_show_address (int *variable)
  
{
  printf ("%p\n", variable);
}

/*
int	main()
{
int	variable = 5 ;
/*my_show_address (NULL); 
my_show_address (&variable);
}
*/