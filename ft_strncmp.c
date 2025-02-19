#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i = 0;
  while( n > 0)
  {
    if(s1[i] != s2[i])
      return (s1[i] - s2[i]);
    if(!s1[i] || !s2[i])
      return 0;
    i++;
    n--;
  }
  return 0;
}