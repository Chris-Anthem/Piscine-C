#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  if (argc > 2)
    {
      int fd;
      fd = open (argv[1], O_WRONLY | O_TRUNC | O_CREAT, S_IRWXU);
      int i = 2;
        while (argv[i])
        {
            write(fd, argv[i], strlen(argv[i]));
            i++;
            write(fd, "\n", 1);
        } 
      close(fd);
      return 0;
    }
  else
    {
      printf("Error.\n");
      return 1;
    }
}