/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_rotate_ab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:40:08 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 01:59:59 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	calculate_rrarb_b(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;

	i = 0;
	if (pos != 0)
		i = size[0] - pos;
	i = find_place_in_b(stack_a, stack_b, size[1], pos) + i;
	return (i);
}

int	calculate_rarrb_b(int *stack_a, int *stack_b, int s_b, int pos)
{
	int	i;

	i = 0;
	if (find_place_in_b(stack_a, stack_b, s_b, pos))
		i = s_b - find_place_in_b(stack_a, stack_b, s_b, pos);
	i = pos + i;
	return (i);
}

int	calculate_rr_b(int *stack_a, int *stack_b, int s_b, int pos)
{
	int	i;

	i = find_place_in_b(stack_a, stack_b, s_b, pos);
	if (i < pos)
		i = pos;
	return (i);
}

int	calculate_rrr_b(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;

	i = 0;
	if (find_place_in_b(stack_a, stack_b, size[1], pos))
		i = size[1] - find_place_in_b(stack_a, stack_b, size[1], pos);
	if (pos != 0 && i < (size[0] - pos))
		i = size[0] - pos;
	return (i);
}

int	calculate_rotate_ab(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;
	int	j;

	j = 0;
	i = calculate_rrr_b(stack_a, stack_b, size, pos);
	while (j < size[0])
	{
		if (i > calculate_rr_b(stack_a, stack_b, size[1], pos))
			i = calculate_rr_b(stack_a, stack_b, size[1], pos);
		if (i > calculate_rrr_b(stack_a, stack_b, size, pos))
			i = calculate_rrr_b(stack_a, stack_b, size, pos);
		if (i > calculate_rarrb_b(stack_a, stack_b, size[1], pos))
			i = calculate_rarrb_b(stack_a, stack_b, size[1], pos);
		if (i > calculate_rrarb_b(stack_a, stack_b, size, pos))
			i = calculate_rrarb_b(stack_a, stack_b, size, pos);
		j++;
	}
	return (i);
}
