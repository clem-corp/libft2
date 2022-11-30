/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:51:02 by clacaill          #+#    #+#             */
/*   Updated: 2022/11/04 14:51:05 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*trim;

	while (*s1 && ft_isset(*s1, set))
		s1++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_isset(s1[end], set))
		end--;
	trim = malloc((end + 2) * sizeof(char));
	if (!trim)
		return ((void *)0);
	i = -1;
	while (s1[++i] && i <= end)
		trim[i] = s1[i];
	trim[i] = '\0';
	return (trim);
}

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}
