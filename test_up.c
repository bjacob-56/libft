#include "libft.h"

#include <stdio.h>
//#include <libft.h>

int main()
{
    char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
    char    *set = " \t\n";
    char    *res;

    res = ft_strtrim(s1, set);
    printf("res = -%s-\n",res);
    free (res);
/*
    i = -100;
    while (i < 240)
    {
        printf("i = %d, %d, %d, bool = %d\n",i, ft_atoi(i), toupper(i), ft_toupper(i) == toupper(i));
        i++;
    }
    */
}