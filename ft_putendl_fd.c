#include "libft.h"
#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
  write(fd, s, ft_strlen(s));
  write(fd,"\n",1);
}
int main()
{
  ft_putendl_fd("Hello World",1);
}