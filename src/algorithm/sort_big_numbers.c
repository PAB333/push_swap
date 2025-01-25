/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:21:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/25 19:19:47 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <stdio.h>

void sort_b(int *stack_a, int *stack_b, int *s_a, int *s_b)
{
	int	i;
	int	j;

	while (*s_a > 3 && it_is_sorted(stack_a, *s_a))
	{
		i = 0;
		j = calculate_rotate_ab(stack_a, stack_b, *s_a, *s_b, i);
		while (j >= 0)
		{
			if (j == calculate_rr(stack_a, stack_b, *s_b, i))
				j = apply_rr(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rarrb(stack_a, stack_b, *s_b, i))
				j = apply_rarrb(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrarb(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rrarb(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrr(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rrr(stack_a, stack_b, s_a, s_b, i);
		}
		i++;
	}
}

void	sort_big_numbers(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	push_b(stack_a, stack_b, size_a, size_b);
	if (*size_a > 3)
		push_b(stack_a, stack_b, size_a, size_b);
	sort_b(stack_a, stack_b, size_a, size_b);
	while (stack_b[0] != find_max_value(stack_b, *size_b))
		reverse_rotate_b(stack_b, *size_b);
	if (*size_a == 3)
		sort_3_numbers(stack_a, *size_a);
}
