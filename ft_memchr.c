#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  const char *ptr = s;
  while(n--)
  {
    if(*ptr == (char)c)
      return (void *)ptr;
    ptr++;
  }
  return NULL;
}
