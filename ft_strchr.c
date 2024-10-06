#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  int i = 0;
  
  while(s[i++])
    if(s[i] == (char)c)
      return ((char *)s + i);
  
  if (c == '\0')
    return (char *)(s + i);
  return NULL;
}