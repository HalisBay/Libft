#include "libft.h"
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
  if(!s1)
    return NULL;
  char *ptr = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1 ) * sizeof(char));
  if(ptr == NULL)
    return NULL;

  int i = 0;
  
  while(s1[i])
  {
    ptr[i] = s1[i];
    i++;
  }
  
  int j = 0;
  
  while(s2[j])
  {
    ptr[i] = s2[j];
    i++;
    j++;
  }
  
  ptr[i] = '\0';

  return ptr;
}