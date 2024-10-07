#include "libft.h"
#include <stdlib.h>

static int counter(char const *s, char c)
{
  int i = 0;
  int count = 0;
  
  while(s[i])
  {
    if(s[i] == c)
      count++;
    i++;
  }
  return (count > 0) ? count + 1 : 0;
}

static char *getWord(char const *s, char c,int *i)
{
  int j = *i;
  
  while(s[*i] && s[*i] != c)
    (*i)++;
  
  return ft_substr(s, j, *i - j);
}
char **ft_split(char const *s, char c)
{
  if(!s)
    return NULL;
  int num = counter(s, c);
  char **ptr = (char **) malloc(sizeof(char *) * (num + 1));
  
  if(!ptr)
    return NULL;
  
  int i = 0;
  int j = 0;
  
  while(s[i])
  {
    if(s[i] != c)
    {
      ptr[j] = getWord(s, c, &i);
      if(!ptr[j])
      {
        int x = 0;
        while(x < j)
        {
          free(ptr[x]);
          x++;
        }
        free(ptr);
        return NULL;
      }
      j++;
    }
    i++;
  }
  ptr[j] = NULL;
  return ptr;
}