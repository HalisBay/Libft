#include "libft.h"
#include <unistd.h>

int		ft_isalpha(int c)
{
  return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}