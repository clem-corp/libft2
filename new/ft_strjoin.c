/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:44 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/10 12:38:34 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	int		ln;
	char	*dest;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	ln = i1 + i2;
	dest = malloc((ln + 1) * sizeof(char));
	if (!dest)
		return ((void *)0);
	i1 = -1;
	i2 = -1;
	while (s1[++i1])
		dest[i1] = s1[i1];
	while (s2[++i2])
		dest[i1 + i2] = s2[i2];
	while (i1 + i2 < ln + 1)
		dest[i1 + i2++] = '\0';
	return (dest);
}
