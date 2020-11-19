#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{   
    if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else
    {
        if (n < 0)
        {
            ft_putchar_fd('-', fd);
            n = -n;
        }
        n = write_moins(n, fd);
        if (n < 10)
            ft_putchar_fd(n + '0', fd);
        else
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n % 10, fd);
        }
    }
}