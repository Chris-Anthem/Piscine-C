#include <stdio.h>

void	my_swap(int *nbr1,int *nbr2)
{
	int tmp = *nbr1; 
	*nbr1 = *nbr2;
	*nbr2= tmp;
}

/*
**int	main ()
**
**{  
**	int nb1 = 42;
**	int nb2 = 21;
**
**	printf ("%d - %d\n" , nb1, nb2);
**	my_swap(&nb1 , &nb2);
**	printf ("%d - %d\n", nb1, nb2);
**	return (0);
**	}
*/
