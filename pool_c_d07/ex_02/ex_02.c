#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
  
  int i=0;
  //  printf("%d", argc);
  //printf("%s\n",argv[1]);

  if ( argc == 1)// si je n'entre rien je rentre dans ma boucle
    {
	  printf("Error.\n");
	  return (0);// pour sortir du programme.
    }
     
    int  a = atoi (argv[1]); /* 1 * car atoi prend un char* en paramètre.
    Attention si cette fonction est placée avant le if et que je n'entre rien en paramètre,
    cela va essayer de convertir un argv[1] qui n 'exite pas */
    
    if (a > 0)
	  {
	    for(i =0; i<a;i++)
      {
        printf ("Hello\n");
      }
    }
    else
	  {
	    printf("Error.\n");
      return (0);// pour sortir du programme.
	  }
    
           
  return (0);
}
