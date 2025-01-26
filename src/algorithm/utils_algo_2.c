/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:08:45 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/26 01:18:46 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_place_in_a(int *stack_a, int *stack_b, int s_a, int pos)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (stack_b[pos] < stack_a[0] && stack_b[pos] > stack_a[s_a - 1])
		i = 0;
	else if (stack_b[pos] > find_max_value(stack_a, s_a) 
		|| stack_b[pos] < find_min_value(stack_a, s_a))
	{
		while (stack_a[j] != find_max_value(stack_a, s_a))
			j++;
		i = j;
	}
	else
	{
		j = 0;
		while ((j < s_a - 1) && (stack_b[pos] < stack_a[j] || stack_b[pos] > stack_a[j + 1]))
			j++;
	}
	return (i);
}

int	find_place_in_a_w_nbr(int *stack_a, int s_a, int nbr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nbr < stack_a[0] && nbr > stack_a[s_a - 1])
		i = 0;
	else if (nbr > find_max_value(stack_a, s_a) 
		|| nbr < find_min_value(stack_a, s_a))
	{
		while (stack_a[j] != find_max_value(stack_a, s_a))
			j++;
		i = j;
	}
	else
	{
		j = 0;
		while ((j < s_a - 1) && (nbr < stack_a[j] || nbr > stack_a[j + 1]))
			j++;
	}
	return (i);
}
