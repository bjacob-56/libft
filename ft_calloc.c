#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *res;

    if (!nmemb || !size)
    {
        if (!(res = malloc(1)))
            return (NULL);
        return (res);
    }
    if (!(res = malloc(nmemb * size)))
        return (NULL);
    ft_bzero(res, nmemb * size);
    return (res);
}