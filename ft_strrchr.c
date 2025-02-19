#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int i = ft_strlen(s);
  
  if(c == '\0')
    return ((char *)s + i);
  
  while(i > 0)
  {
    if(s[i - 1] == (char) c)
      return ((char *)s + (i-1));
    i--;
  }
  return NULL;
}