#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *elem;
    t_list  *next;
    t_list  *begin;
    t_list  *old;

    if (!lst)
        return (NULL);
    if (!(elem = malloc(sizeof(t_list))))
            return (NULL);
        elem->content = f(lst->content);
        lst = lst->next;
    begin = elem;
    while (lst)
    {
        if (!(next = malloc(sizeof(t_list))))
            return (NULL);
        next->content = f(lst->content);
        elem->next = next;
        elem = next;
        old = lst;
        del(old->content);
        lst = lst->next;
        free(old);
    }
    return (begin);
}