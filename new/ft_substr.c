/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:21:39 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/07 16:56:12 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	int				i;
	char			*cpy;

	size = ft_strlen(s);
	i = 0;
	cpy = malloc(len * sizeof(char *));
	if (!cpy)
		return (NULL);
	while (start + i < ft_strlen(s) && s[start + i] && i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
