#include "libft.h"

long    ft_abs(int n)
{
    long    nbr;

    nbr = (long)n;
    if (nbr >= 0)
        return (nbr);
    return (-nbr);
}