#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *ptr;

    ptr = (char*)s;
    while (*ptr && *ptr != (char)c)
        ptr++;
    if (*ptr == (char)c)
        return (ptr);
    return (NULL);
}