#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *ptr1;
    char    *ptr2;

    ptr1 = (char*)dest;
    ptr2 = (char*)src;
    if (!dest && !src)
        return (NULL);
    i = -1;
    while (++i < n)
        ptr1[i] = ptr2[i];
    return (dest);
}