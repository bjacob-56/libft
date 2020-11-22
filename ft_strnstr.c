/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:34 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 12:16:19 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;
	size_t	j;

	ptr1 = (char*)str;
	ptr2 = (char*)to_find;
	i = 0;
	if (!ptr2[0])
		return (ptr1);
	while (i < n)
	{
		j = 0;
		while (ptr1[i + j] == ptr2[j] && ptr2[j] && i + j < n)
			j++;
		if (!ptr2[j])
			return (ptr1 + i);
		i++;
	}
	return (NULL);
}
