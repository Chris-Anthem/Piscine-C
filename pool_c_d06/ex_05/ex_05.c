#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


void my_show_str (char **tab)
{
int i;
int j;

j = 0;
i = 0; 

    while (tab[i] != NULL)
    {
        while (tab[i][j] != '\0')
        {
            write (1, &tab[i][j], 1);
            j++;
        }
        write (1, &"\n", 1);
        j=0;
        i++;
    }


}

/*
int main()
{
    char *tab[] = {
        "Hello",
        "Students",
        NULL
    };
    my_show_str(tab);
    return(0);
}

*/