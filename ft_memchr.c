#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *ptr;

    ptr = (char*)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == c)
            return (ptr + i);
        i++;
    }
    return (NULL);
}