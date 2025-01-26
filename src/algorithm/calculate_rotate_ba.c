/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_rotate_ba.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:58:26 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/26 01:46:48 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	calculate_rrarb_a(int *stack_a, int *stack_b, int s_a, int pos)
{
	int	i;

	i = 0;
	if (find_place_in_a(stack_a, stack_b, s_a, pos))
		i = s_a - find_place_in_a(stack_a, stack_b, s_a, pos);
	i = pos + i;
	return (i);
}

int	calculate_rarrb_a(int *stack_a, int *stack_b, int s_a, int s_b, int pos)
{
	int	i;

	if (pos != 0)
		i = s_b - pos;
	i = find_place_in_a(stack_a, stack_b, s_a, pos) + i;
	return (i);
}

int	calculate_rr_a(int *stack_a, int *stack_b, int s_a, int pos)
{
	int	i;

	i = find_place_in_a(stack_a, stack_b, s_a, pos);
	if (i < pos)
		i = pos;
	return (i);
}

int	calculate_rrr_a(int *stack_a, int *stack_b, int s_a, int s_b, int pos)
{
	int	i;

	i = 0;
	if (find_place_in_a(stack_a, stack_b, s_a, pos))
		i = s_a - find_place_in_a(stack_a, stack_b, s_a, pos);
	if (i < (s_b - pos))
		i = s_b - pos;
	return (i);
}

int	calculate_rotate_ba(int *stack_a, int *stack_b, int s_a, int s_b, int pos)
{
	int	i;
	int	j;

	j = 0;
	i = calculate_rrr_a(stack_a, stack_b, s_a, s_b, pos);
	while (j < s_b)
	{
		if (i > calculate_rr_a(stack_a, stack_b, s_a, pos))
			i = calculate_rr_a(stack_a, stack_b, s_a, pos);
		if (i > calculate_rrr_a(stack_a, stack_b, s_a, s_b, pos))
			i = calculate_rrr_a(stack_a, stack_b, s_a, s_b, pos);
		if (i > calculate_rarrb_a(stack_a, stack_b, s_a, s_b, pos))
			i = calculate_rarrb_a(stack_a, stack_b, s_a, s_b, pos);
		if (i > calculate_rrarb_a(stack_a, stack_b, s_a, pos))
			i = calculate_rrarb_a(stack_a, stack_b, s_a, pos);
		j++;
	}
	return (i);
}