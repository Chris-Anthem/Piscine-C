#include<stdio.h>

int array_sum (int *tab, int size)
{
    int i;
    int somme;
    somme=0;
  
    for (i=0; i<size; i++)
    {
      somme = somme + tab[i];
    }
    return somme;
}

/*
int main()
{
    int tab[3] = {3, 4, 5};

    printf ("%d\n", array_sum(tab, 3));
    return(0);
}
*/