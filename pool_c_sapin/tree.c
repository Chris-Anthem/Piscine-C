#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void    my_putchar(char c);
void    tree(int size);


/*----------My_putchar-------
void    my_putchar(char c)
{
 write(1, &c, 1);
}
//-------------------------- */


void tree (int size)
{
	char *etoile = "*";
	char *espace = " ";
	char *retour = "\n";
	char *tronc = "|";
	int o;
	int j;
	j=0;
	int k;
	k=0;
	int l;
	l=0;
	int f;
	f=3;
	int i;
	i=0;
	
	if (size == 1)
	{
		for (i=0; i<=3; i++)
		{
			if (i==0)
			{
				o = 0;
				while(o<3)
				{
					my_putchar(espace);
					o++;
				}
				
				if (o==3)
				{
					my_putchar(etoile);
					my_putchar(retour);
				}
			}
			if (i==1)
			{
				while(j<2)
				{
					my_putchar(espace);
					j++;
				}
				if (j==2)
				{
					while (k<f)
					{
						my_putchar(etoile);
						k++;
					}
					my_putchar(retour);
					f = f+2;
					k=0;
				}
			}
			if (i==2)
			{
				l=0;
				while (l<1)
				{
					my_putchar(espace);
					l++;
				}
				if (l==1)
				{
					while (k<f)
					{
						my_putchar(etoile);
						k++;
					}
					f = f+2;
					k=0;
				}
				my_putchar(retour);
			}
			if (i==3)
			{
				while (k<f)
				{
					my_putchar(etoile);
					k++;
				}
				my_putchar(retour);
				k=0;
			}
		}
		if (o==3 && i==4)
		{
			i=0;
			while (i<3)
			{
				my_putchar(espace);
				i++;
			}
			if (i==3)
			{
				my_putchar(tronc);
				my_putchar(retour);
			}
		}
	}
}

/*
int main(int argc, char **argv)
{
	int a;
	
	if (argc == 2)
	{
		a = atoi(argv[1]);
	}
	if (argc ==2 && a!=0)
	{
		tree(a);
	}
	return 0;
}
*/