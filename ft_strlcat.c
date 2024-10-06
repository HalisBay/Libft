#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t srcLen = ft_strlen(src);
  size_t dstLen = ft_strlen(dst);
  
  if(dstsize == 0)
    return srcLen;

  if(dstLen >= dstsize)
    return dstsize + srcLen;
  
  
  size_t i = dstLen;
  size_t j = 0;
  while(src[j] && i < dstsize - 1)
    dst[i++] = src[j++];
  dst[i] = '\0';
  return dstLen + srcLen;
}