/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:33 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 12:05:43 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		if (ptr1[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
