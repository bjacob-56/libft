/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:33 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 11:09:35 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t  i;
	char    *ptr1;
	char    *ptr2;

	ptr1 = (char*)dest;
	ptr2 = (char*)src;
	if (!dest && !src)
		return (NULL);
	i = -1;
	while (++i < n)
		ptr1[i] = ptr2[i];
	return (dest);
}
