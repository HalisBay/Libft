#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    size_t i = -1;

    while (++i < n)
        ptr[i] = (unsigned char)c;
    return s;
}

int main()
{
    char str[] = "Hello World!";
    printf("%s\n", (char *)ft_memset(str, 'a', 6));
    return 0;
}
