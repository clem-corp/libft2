/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:49:05 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/07 16:53:47 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	st;

	st = nmemb * size;
	if (nmemb && ((st / nmemb) != size))
		return (NULL);
	ret = maloc(st);
	if (!ret)
		return (0);
	ft_bzero(ret, st);
	return (ret);
}
