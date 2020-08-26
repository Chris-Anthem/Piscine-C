#include <unistd.h>

int my_aff_comb()
{
  int i;
  int j;
  int b;
  int n;
  int e;

  e=32;
  n=9;

    for (i=0 ; i <= n ; i++ )
      	{
		for (j=i+1 ; j <= n ; j++)
	  	{
	    	for (b=j+1 ; b <= n ; b++)
	      	{
				if (i<j && i<b && j<b && i!=j!=b)
		  			{
		    			i+=48;
		    			write (1, &i, 1);
		    			i-= 48;
		    			j+=48;
		    			write (1, &j, 1);
		    			j-=48;
		    			b+=48;
		    			write (1, &b, 1);
		    			b-= 48;
		    			if (i<7)
		      				{
							write (1, ",",1);
							write (1 , &e ,1);
		      				}
		  			}
	    	}
	  	}
      	}
}


/*int main()
**{
**my_aff_comb ();
**return (0);
**}
*/