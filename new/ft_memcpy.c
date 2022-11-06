/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:45:46 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/06 19:32:48 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	i = -1;
	d = (char *)dest;
	s = (const char *)src;
	while (n > ++i)
		d[i] = s[i];
	return (dest);
}
