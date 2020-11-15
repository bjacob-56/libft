#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *elem;

    if (!(*alst))
        *alst = new;
    else
    {    
        elem = ft_lstlast(*alst);
        elem->next = new;
    }
}