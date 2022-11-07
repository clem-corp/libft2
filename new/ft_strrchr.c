/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:21:00 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/07 11:35:44 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	while (--len >= 0)
	{
		if (s[len] == c % 256)
		{
			return ((char *)&s[len]);
		}
	}
	return ((void *)0);
}
