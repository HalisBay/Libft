#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,
 size_t len)
{
  unsigned int x = ft_strlen(s);

  if(start >= x)
    return NULL;

  char *cp = (char *)malloc(sizeof(char) * (len + 1));
  if(cp == NULL)
    return NULL;
  ft_strlcpy(cp, s + start,len +1 );
  return cp;
}