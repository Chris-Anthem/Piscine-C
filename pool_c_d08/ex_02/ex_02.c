#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void my_init(t_my_struct* a)
  
{
  a->id=0;
  a->str=NULL;
}


/*int	main()
{
t_my_struct a;
my_init(&a);
printf("%d %p\n", a.id, a.str);
return(0);
}
*/