#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int s_len;
    char    c;

    c = '\n';
    if (!s)
        return ;
    s_len = ft_strlen(s);
    write(fd, s, s_len);
    write(fd, &c, 1);    
}