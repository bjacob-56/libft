/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:34 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 12:16:47 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char*)s;
	i = 0;
	while (ptr[i])
		i++;
	while (i >= 0 && ptr[i] != (char)c)
		i--;
	if (i >= 0)
		return (ptr + i);
	return (NULL);
}
