#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  if(!s)
    return NULL;
  
  char *ptr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
  
  if(!ptr)
    return NULL;
  
  int i = 0;
  
  while(s[i])
  {
    ptr[i] = f(i, s[i]);
    i++;
  }
  
  ptr[i] = '\0';
  
  return ptr;
}