#include "rubiks.h"
#include<unistd.h>

void algo_line(int **table, int line);  //To the left
void algo_column(int **table, int column); //On the top
void algo_square(int **table, int square); //Clockwise 

void algo_line(int **table, int line)
{   

    int temporaire = table[line][0];
    for (int i = 1 ; i < 3 ; i++)
        {
            table[line][i-1] =  table[line][i];
        } 
    table[line][3] = temporaire;

     if (PRINT_SQUARE_DEBUG_ == 1)
    {   
        line = line + 48;
        write (1, "Rotate Left line ", 18 );
        write (1, &line, 1);
        write (1, "\n", 1);
    }

}

void algo_column(int **table, int column) 
{
    int temporaire = table[0][column];
    for (int i = 1 ; i < 4 ; i++)
        {
            table[i-1][column] =  table[i][column];
        } 
    table[3][column] = temporaire;

        if (PRINT_SQUARE_DEBUG_ == 1)
    {   
        column = column + 48;
        write (1, "Rotate Top column ", 19 );
        write (1, &column, 1);
        write (1, "\n", 1);
    }
}

void algo_square(int **table, int square) 
{
    //reference pour chaque carré : en haut à gauche int
    int line = 2*(square/2);
    int column = 2*(square%2);
    //rotation à partir du dessous de la référence
    //fini avec temporaire dans le voisin de droite du carré de la référence
    int temporaire = table[line][column];
    table[line][column] = table[line+1][column];
    table[line+1][column] = table[line+1][column+1];
    table[line+1][column+1] = table[line][column+1];
    table[line][column+1] = temporaire;
    
    if (PRINT_SQUARE_DEBUG_ == 1)
    {
        square =  square + 48;
        write (1, "Rotate Clockwise square ", 25 );
        write (1, &square, 1);
        write (1, "\n", 1);
    }
}