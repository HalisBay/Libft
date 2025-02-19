#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
  void *ptr = malloc(count * size );

  if(ptr == NULL)
    return (NULL);

  ft_bzero(ptr, count * size);

  return  ptr;

}