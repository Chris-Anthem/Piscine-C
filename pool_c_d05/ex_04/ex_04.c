#include<stdio.h>

char	*my_strupcase(char *str1)
  
{
  int	i;
  i=0;
  
  while (str1[i] != '\0')
    {
      if (97 <=str1[i] && 122 >=str1[i])
	{
	  str1[i] = str1[i] -32;
	}
      
      i++;
    }
  return str1;
}

/*
int	main()
{
char	str1[37]="Bsahtek Khouya";
printf ("%s\n",my_strupcase(str1));
}
*/
