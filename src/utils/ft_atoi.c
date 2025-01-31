/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:54:32 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:54:53 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

long	ft_atoi(char *nbr)
{
	int				i;
	unsigned long	result;
	int				sign;

	i = 0;
	sign = 1;
	result = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		while (nbr[i + 1] == '-' || nbr[i + 1] == '+')
			i++;
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		result = result * 10 + (nbr[i] - 48);
		i++;
	}
	return (result * sign);
}
