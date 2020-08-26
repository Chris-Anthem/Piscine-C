#include <stdio.h>

void my_sort_int_tab(int*tab,int size)
{
  int i,j,tmp;
  for(i=0;i<size-1;i++)
    {
      for(j=0;j<size-i-1;j++)
		{
	  		if(tab[j+1]<tab[j])
	    		{
	      			tmp=tab[j+1];
	      			tab[j+1]=tab[j];
	      			tab[j]=tmp;
	    		}
		}
    }
}

/*
int main()
{
	int i =0;
	int tab[10] = {1, 2, 4, -2, 1, 2, 5, 19, 1, 2};
	my_sort_int_tab(tab, 10);
	while (i < 10) {
		printf("%d", tab[i]);
		i++;
	}
	printf ("\n");
	return(0);
}
*/