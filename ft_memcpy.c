#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  const char *s = (const char *)src;
  char *d = (char *)dest;
  size_t i = 0;
  
  while (i < n)
    {
      d[i] = s[i];
      i++;
    }
  
  return dest;
}