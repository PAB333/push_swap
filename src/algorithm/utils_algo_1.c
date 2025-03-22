/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:07:30 by pibreiss          #+#    #+#             */
/*   Updated: 2025/03/22 21:51:34 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min_value(int *stack, int size)
{
	int	i;
	int	min;

	i = 1;
	min = stack[0];
	while (i < size)
	{
		if (min > stack[i])
			min = stack[i];
		i++;
	}
	return (min);
}

int	find_max_value(int *stack, int size)
{
	int	i;
	int	max;

	i = 1;
	max = stack[0];
	while (i < size)
	{
		if (max < stack[i])
			max = stack[i];
		i++;
	}
	return (max);
}

int	find_place_in_b(int *stack_a, int *stack_b, int s_b, int pos)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (stack_a[pos] > stack_b[0] && stack_a[pos] < stack_b[s_b - 1])
		i = 0;
	else if (stack_a[pos] > find_max_value(stack_b, s_b)
		|| stack_a[pos] < find_min_value(stack_b, s_b))
	{
		while (stack_b[j] != find_max_value(stack_b, s_b))
			j++;
		i = j - 1;
	}
	else
	{
		j = 0;
		while (stack_a[pos] > stack_b[j] || stack_a[pos] < stack_b[j + 1])
		{
			j++;
			i++;
		}
	}
	return (i);
}

int	find_place_in_b_w_nbr(int *stack_b, int s_b, int nbr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nbr > stack_b[0] && nbr < stack_b[s_b - 1])
		i = 0;
	else if (nbr > find_max_value(stack_b, s_b)
		|| nbr < find_min_value(stack_b, s_b))
	{
		while (stack_b[j] != find_max_value(stack_b, s_b))
			j++;
		i = j - 1;
	}
	else
	{
		j = 0;
		while (nbr > stack_b[j] || nbr < stack_b[j + 1])
		{
			j++;
			i++;
		}
	}
	return (i);
}
