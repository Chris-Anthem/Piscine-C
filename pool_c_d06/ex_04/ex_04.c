#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *str)
{
    int i;
    char *newstr;
    
    i = 0;
    while (str[i]!='\0')
    {
        i++;
    }
    newstr = malloc (sizeof (char) * i);
    
    i=0; /*réinitialisation du i pour la prochaine boucle,
    ou alors changer de lettre. Exemple :  while (str[n]!='0')
    et faire la boucle entière avec n*/

    while (str[i]!='\0')
    {    
        newstr[i] = str[i];
        i++;
    }
    newstr[i]= '\0';
    return newstr;
}

/*
int main()
{
    char *str= "Hello le monde!";
    printf("%s\n", my_strdup(str));
}

*/