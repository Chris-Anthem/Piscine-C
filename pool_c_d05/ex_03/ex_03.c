#include<stdio.h>

int	my_strcmp(char*str1, char*str2)
{
  int	i;
  int total;
  i=0;
  
  while(str1[i]==str2[i] && str1[i] != '\0' && str2[i] !='\0')
    {
      i++;
    }
  total = str1[i] - str2[i];
return total;
}

/*
int	main()
{
char *autre="Hello\0";
char *autre2="Bonjour\0";
printf("%d\n", strcmp(autre, autre2));    
}
*/