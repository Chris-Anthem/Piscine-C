#include	<unistd.h>
#include	<stdio.h>
#include	<time.h>

int write_from_the_middle(char *str)
{

int i = 0;
int n = 0;
int count = 0;
int middle = 0;

//my_strlen
for (int i = 0; str[i] != '\0'; i++)
count++;

if (count % 2 == 0)
    {
    middle == count/2;
    }
else
    {
    middle == count/2 + 1;
    }

i = 0;

//my_putstr
    while (str[i]!= middle)
        {
            sleep(1);
            write (1,&str[i],1);
            sleep(1);
            i++;
            usleep(80000);
        }

    while (n <= middle +1)
    {   
        write (1,"G",1);
        sleep(1);
        write (1,"\r",1);
        sleep(1);
        i = 0;

        while (i < n)
        {
            write (1,"H",1);
            sleep(1);
            write (1,&str[i],1);
            sleep(1);
            i++;
        }
        write (1,"I",1);
        sleep(1);
        i = n;

        while (i < count - 1)
        {
            write (1,"J",1);
            sleep(1);
            write (1,&str[i],1);
            sleep(1);
            i++;
            write (1,"K",1);
            sleep(1);
        }
        i = 0;
    write (1,"L",1);
    sleep(1);
        while (i < n)
        {
            write (1,"M",1);
            sleep(1);
            write (1," ",1);
            sleep(1);
            i++;
        }
write (1,"N",1);
        n++;
        count--;
sleep(1);
        write (1,"",1);
}
    write (1,"\n",1);
}


int main ()
{
  char *k="----------9 8 7 6 5 4 3 2 1 0 1 2 3 4 5 6 7 8 9----------";
  write_from_the_middle(k);
  return(0);  
}
