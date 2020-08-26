#include <stdio.h>

int my_getnbr(char *str)
{
    return(0);
}


int my_getnbr(char *str);
int main()
{
    printf("\"%s\" returns %d\n","–42", my_getnbr("–42"));
    printf("\"%s\" returns %d\n","+–-+–++–-+–-+–-+-42", my_getnbr("+–-+–++–-+–-+–-+-42"));
    printf("\"%s\" returns %d\n","42a43", my_getnbr("42a43"));
    printf("\"%s\" returns %d\n","-a-a42", my_getnbr("-a-a42"));
    printf("\"%s\" returns %d because this number doesn’t fit in an integer.\n",
        "1100000000000000000042",
        my_getnbr("1100000000000000000042"));
    printf("\"%s\" returns %d for the same reason. \n",
        "-1000000000000000000042",
        my_getnbr("-1000000000000000000042"));
    return (0);
}