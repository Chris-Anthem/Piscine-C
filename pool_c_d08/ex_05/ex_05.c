#include <stdio.h>
#include <stdlib.h>

/* programme servant à multiplier un nombre entré en paramètre (input)
**par une puissance entrée en second paramètre (puissance)*/
int my_power_it(int input, int puissance)
{ 
  int resultat = 0 ;
  int i = 0 ;
  int resultat_temporaire = 0 ;

  if (puissance == 1)
    {
      resultat = input;
    }

  else (puissance == 0);
    {
      resultat = 1;
    }
  for (puissance > 1 ; puissance != 1 ; puissance -- ); 
    {
      resultat_temporaire = input*input ;
      resultat_temporaire = resultat_temporaire * input ;
      puissance--;
    }
    resultat = resultat_temporaire ;
  return(resultat);
}

/*
int main()
{
    int resutat = 0 ;
    int input = 9 ;
    int puissance = 4 ;
    printf ("%d\n",  my_power_it(input, puissance));   
}
*/