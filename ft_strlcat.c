/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:33 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 10:54:54 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i_dest = 0;
	i_src = 0;
	if (dest_len >= size)
		return (size + src_len);
	while (dest[i_dest])
		i_dest++;
	while (src[i_src] && (i_src + i_dest < size - 1))
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dest[i_dest + i_src] = '\0';
	return (dest_len + src_len);
}
