#include <stdio.h>

int my_strlen(char *str)
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
    {
  count++;
    }
  return count;
}

/*
int main()
{
  return(my_strlen("Geckos"));
}
*/