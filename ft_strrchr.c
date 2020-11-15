#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *ptr;
    int     i;

    ptr = (char*)s;
    i = 0;
    while (ptr[i])
        i++;
    while (i >= 0 && ptr[i] != (char)c)
        i--;
    if (i >= 0)
        return (ptr + i);
    return (NULL);
}