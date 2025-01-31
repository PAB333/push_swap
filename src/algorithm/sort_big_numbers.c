/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:21:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:26:18 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_a(int *stack_a, int *stack_b, int *size)
{
	int	i;
	int	j;

	while (size[1] > 0)
	{
		i = 0;
		j = calculate_rotate_ba(stack_a, stack_b, size, i);
		while (j >= 0)
		{
			if (j == calculate_rr_a(stack_a, stack_b, size[0], i))
				j = apply_rr_ba(stack_a, stack_b, size, i);
			else if (j == calculate_rarrb_a(stack_a, stack_b, size, i))
				j = apply_rarrb_ba(stack_a, stack_b, size, i);
			else if (j == calculate_rrarb_a(stack_a, stack_b, size[0], i))
				j = apply_rrarb_ba(stack_a, stack_b, size, i);
			else if (j == calculate_rrr_a(stack_a, stack_b, size, i))
				j = apply_rrr_ba(stack_a, stack_b, size, i);
			else
				i++;
		}
	}
}

void	sort_b(int *stack_a, int *stack_b, int *size)
{
	int	i;
	int	j;

	while (size[0] > 3 && it_is_sorted(stack_a, size[0]))
	{
		i = 0;
		j = calculate_rotate_ab(stack_a, stack_b, size, i);
		while (j >= 0)
		{
			if (j == calculate_rr_b(stack_a, stack_b, size[1], i))
				j = apply_rr_ab(stack_a, stack_b, size, i);
			else if (j == calculate_rarrb_b(stack_a, stack_b, size[1], i))
				j = apply_rarrb_ab(stack_a, stack_b, size, i);
			else if (j == calculate_rrarb_b(stack_a, stack_b, size, i))
				j = apply_rrarb_ab(stack_a, stack_b, size, i);
			else if (j == calculate_rrr_b(stack_a, stack_b, size, i))
				j = apply_rrr_ab(stack_a, stack_b, size, i);
			else
				i++;
		}
	}
}

void	sort_big_numbers(int *stack_a, int *stack_b, int *size_stack)
{
	int	i;

	i = 0;
	push_b(stack_a, stack_b, size_stack);
	if (size_stack[0] > 3 && it_is_sorted(stack_a, size_stack[0]))
		push_b(stack_a, stack_b, size_stack);
	if (size_stack[0] > 3 && it_is_sorted(stack_a, size_stack[0]))
		sort_b(stack_a, stack_b, size_stack);
	if (size_stack[0] == 3)
		sort_3_numbers(stack_a, size_stack[0]);
	while (stack_b[0] != find_max_value(stack_b, size_stack[1]))
		reverse_rotate_b(stack_b, size_stack[1]);
	sort_a(stack_a, stack_b, size_stack);
	while (stack_a[i] != find_min_value(stack_a, size_stack[0])
		&& it_is_sorted(stack_a, size_stack[0]))
		i++;
	if (i < size_stack[0] - i)
	{
		while (stack_a[0] != find_min_value(stack_a, size_stack[0]))
			rotate_a(stack_a, size_stack[0]);
	}
	else
		while (stack_a[0] != find_min_value(stack_a, size_stack[0]))
			reverse_rotate_a(stack_a, size_stack[0]);
}
