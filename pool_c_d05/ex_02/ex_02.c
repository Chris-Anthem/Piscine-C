#include<stdio.h>

char	*my_revstr(char*str)
{
  int	le_paki;
  int	le_tos;
  int	le_chinoir;
  
  le_paki=0;
  le_tos=0; /* longueur de la string*/
  le_chinoir=0;

  while (str[le_tos] != '\0'){
    le_tos++;
  }
  le_tos--; /*(enlève juste le \O)*/

  while (le_paki<le_tos)  /*swap pour inverser la string*/
    {
      le_chinoir=str[le_paki];
      str[le_paki]=str[le_tos];
      str[le_tos]=le_chinoir;
      le_paki++;
      le_tos--;
    }
  return (str);
}

/*
int main()

{
char    str[22] = "! rekcuf rehtoM olleH";
printf("%s\n", my_revstr(str));
return (0);
}
*/
