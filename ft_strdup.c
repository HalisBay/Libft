#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
  int len = ft_strlen(s1);

  char *ptr = malloc(len + 1);
  
  if(ptr == NULL)
    return NULL;
  
  ft_memcpy(ptr, s1, len + 1);
  
  return ptr;
}