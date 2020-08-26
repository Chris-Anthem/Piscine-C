#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "abs.h"
#include <string.h>

void my_init(t_my_struct *a, int b, const char *c)
{
  a->id = MY_ABS(b);
  a->str = strdup(c);
  return;
}

/*int main()
{
  t_my_struct a;
  int b = -2;
  const char *c = "hello";

  my_init(&a, b, c);
  
  printf("%d %s\n", a.id, a.str);
}
*/