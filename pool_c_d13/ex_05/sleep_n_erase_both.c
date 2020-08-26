#include	<unistd.h>
#include	<stdio.h>
#include	<time.h>

int erase_to_the_middle(char *str)
{

int i = 0;
int n = 1;
int count = 0;
int middle = 0;

//my_putstr
    while (str[i]!= '\0')
        { 
            write (1,&str[i],1);
            i++;
            usleep(80000);
        }
   
//my_strlen
  for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    middle = count/2; 
  
i = 0;
  
    while (n <= middle +1)
    {
        write (1,"\r",1);
        i = 0;

        while (i < n)
        {
            write (1," ",1);
            i++;
        }
        i = n;

        while (i < count - 1)
        {
            write (1,&str[i],1);
            i++;
        }
        i = 0;

        while (i < n)
        {
            write (1," ",1);
            i++;
        }

        n++;
        count--;
        usleep (90000);
}
    write (1,"\n",1);
}


int main ()
{
  char *k="----------9 8 7 6 5 4 3 2 1 0 1 2 3 4 5 6 7 8 9----------";
  erase_to_the_middle(k);
  return(0);  
}
