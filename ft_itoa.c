#include "libft.h"
#include <stdlib.h>

unsigned int counter(int n)
{
  unsigned int len = 0;
  if(n == 0)
    return 1;
  if(n < 0)
    len ++;
  while(n)
  {
    n /= 10;
    len++;
  }
  return len;
}

char *ft_itoa(int n)
{
  int len = counter(n);
  unsigned int num;
  char *ptr = (char *)malloc(sizeof(char) * (len + 1));
  if(!ptr)
    return NULL;
  if(n < 0)
  {
    ptr[0] = '-';
    num = -n;
  }
  else
    num = n;
  if(num == 0)
    ptr[0] = '0';
  ptr[len] = '\0';
  while(num)
  {
    ptr[len - 1] = (num % 10) + '0';
    num = num / 10;
    len--;
  }
  return ptr;
}