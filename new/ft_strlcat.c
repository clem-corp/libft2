/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:09:07 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/06 19:25:57 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dst;
	size_t	i;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	i = 0;
	if (size <= size_dst)
		return (size + size_src);
	while (src[i] && (size_dst + i) < size - 1)
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_dst + size_src);
}
