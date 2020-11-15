#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t  i;
    char    *ptr;
    char    *res;

    i = 0;
    ptr = (char*)s;
    if (!ptr)
        return (NULL);
    if ((int)start > ft_strlen(ptr))
    {
        if (!(res = malloc(sizeof(char) * 1)))
            return (NULL);
        res[0] = '\0';
        return (res);
    }
    if (!(res = malloc(sizeof(char) * (len + 1))))
        return (NULL);

    while (ptr[i] && i < len)
    {
        res[i] = ptr[i + (size_t)start];
        i++;
    }
    res[i] = '\0';
    return (res);
}