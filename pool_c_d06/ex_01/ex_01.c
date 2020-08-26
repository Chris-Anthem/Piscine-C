#include <stdio.h>
#include <stdlib.h>

char *my_strcpy (char *destination, char *source)
{
  int i = 0;
  while(source[i] != '\0')
    {
      destination[i] = source[i];
      i = i + 1;
    }
  destination [i] = '\0'; 
  return (destination);
}


int my_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
	      {
		i++;
	      }
  return i;
}  

/*
int main ()
{
    char *destination;
    char *source;
    int size;
    
    source = malloc(100 * sizeof(char));
    source = "totodfkxcvnkxc";
    size = my_strlen(source);
    destination = malloc((size + 1) * sizeof(char));
    
    my_strcpy(destination, source);
    printf("%s\n", destination);

    return(0);
}
 */