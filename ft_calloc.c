/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 10:54:32 by bjacob            #+#    #+#             */
/*   Updated: 2020/11/22 11:53:15 by bjacob56         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (!nmemb || !size)
	{
		if (!(res = malloc(1)))
			return (NULL);
		return (res);
	}
	if (!(res = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
