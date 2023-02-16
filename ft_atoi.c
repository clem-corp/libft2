/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clacaill <clacaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:23:01 by clacaill          #+#    #+#             */
/*   Updated: 2023/02/16 06:27:07 by clacaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(const char *nptr)
{
	long int	i;
	long int	nb;
	int			sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r' )))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
		nb = nb * 10 + nptr[i++] - '0';
	return ((long int) nb * sign);
}
