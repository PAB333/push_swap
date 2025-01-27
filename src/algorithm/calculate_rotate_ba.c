/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_rotate_ba.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:58:26 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 02:23:29 by pibreiss         ###   ########.fr       */
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

int	calculate_rarrb_a(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;

	i = 0;
	if (pos != 0)
		i = size[1] - pos;
	i = find_place_in_a(stack_a, stack_b, size[0], pos) + i;
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

int	calculate_rrr_a(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;

	i = 0;
	if (find_place_in_a(stack_a, stack_b, size[0], pos))
		i = size[0] - find_place_in_a(stack_a, stack_b, size[0], pos);
	if (pos != 0 && i < (size[1] - pos))
		i = size[1] - pos;
	return (i);
}

int	calculate_rotate_ba(int *stack_a, int *stack_b, int *size, int pos)
{
	int	i;
	int	j;

	j = 0;
	i = calculate_rrr_a(stack_a, stack_b, size, pos);
	while (j < size[1])
	{
		if (i > calculate_rr_a(stack_a, stack_b, size[0], pos))
			i = calculate_rr_a(stack_a, stack_b, size[0], pos);
		if (i > calculate_rrr_a(stack_a, stack_b, size, pos))
			i = calculate_rrr_a(stack_a, stack_b, size, pos);
		if (i > calculate_rarrb_a(stack_a, stack_b, size, pos))
			i = calculate_rarrb_a(stack_a, stack_b, size, pos);
		if (i > calculate_rrarb_a(stack_a, stack_b, size[0], pos))
			i = calculate_rrarb_a(stack_a, stack_b, size[0], pos);
		j++;
	}
	return (i);
}
