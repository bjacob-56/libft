/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:32 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 12:04:08 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
