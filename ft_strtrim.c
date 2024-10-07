#include "libft.h"

 char *ft_strtrim(char const *s1, char const *set)
{

  if(s1 && set)
  {
    size_t i = 0;
    size_t j = ft_strlen(s1) - 1;
    while(s1[i] && ft_strchr(set, s1[i]))
      i++;
    while(s1[j] && ft_strchr(set, s1[j]) && j > i)
      j--;
    return ft_substr(s1, i, j - i + 1);
  }
  return NULL;
}