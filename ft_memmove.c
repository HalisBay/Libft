#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
  if(len == 0 || dest == src)
    return dest;

  char *d = (char *)dest;
  const char *s = (const char *)src;

  if(d < s)
    ft_memcpy(d, s, len);
  else
  {
    size_t i = len;
    while(i-- > 0)
        d[i] = s[i];
  }
  return dest;
}