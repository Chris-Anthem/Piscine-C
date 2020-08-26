#include <stdio.h>

int my_str_isalpha(char *str)
{
 int i;
 for (i=0; str[i] != '\0'; i++)
   {
     if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
    {
      return 0;
    }
   }
 return 1;
}

/*
int main()
{
    char str1[6] = "Hello";
    char str2[7] = "Pony42";
    char str3[6] = "42";

    printf("%d\n", my_str_isalpha(str1));
    printf("%d\n", my_str_isalpha(str2));
    printf("%d\n", my_str_isalpha(str3));
}
*/