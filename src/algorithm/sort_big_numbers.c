/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:21:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/24 19:46:06 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void sort_b(int *stack_a, int *stack_b, int *s_a, int *s_b)
{
	int	i;
	int	j;

	i = 0;
	while (i < *s_a - 3 && it_is_sorted(stack_a, *s_a))
	{
		j = calculate_rotate(stack_a, stack_b, *s_a, *s_b, i);
		while (j >= 0)
		{
			if (j == calculate_rr(stack_a, stack_b, *s_b, i))
				j = apply_rr(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rarrb(stack_a, stack_b, *s_b, i))
				j = apply_rarrb(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrarb(stack_a, stack_b, *s_a, *s_b, i))
				i = apply_rrarb(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrr(stack_a, stack_b, *s_a, *s_b, i))
				i = apply_rrr(stack_a, stack_b, s_a, s_b, i);
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
	if (*size_a == 3)
		sort_3_numbers(stack_a, *size_a);
}
