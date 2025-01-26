/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:21:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/26 02:22:53 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_a(int *stack_a, int *stack_b, int *s_a, int *s_b)
{
	int	i;
	int	j;

	while (*s_b > 0)
	{
		i = 0;
		j = calculate_rotate_ba(stack_a, stack_b, *s_a, *s_b, i);
		while (j >= 0)
		{
			if (j == calculate_rr_a(stack_a, stack_b, *s_a, i))
				j = apply_rr_ba(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rarrb_a(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rarrb_ba(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrarb_a(stack_a, stack_b, *s_a, i))
				j = apply_rrarb_ba(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrr_a(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rrr_ba(stack_a, stack_b, s_a, s_b, i);
			else
				i++;
		}
	}
}

void	sort_b(int *stack_a, int *stack_b, int *s_a, int *s_b)
{
	int	i;
	int	j;

	while (*s_a > 3 && it_is_sorted(stack_a, *s_a))
	{
		i = 0;
		j = calculate_rotate_ab(stack_a, stack_b, *s_a, *s_b, i);
		while (j >= 0)
		{
			if (j == calculate_rr_b(stack_a, stack_b, *s_b, i))
				j = apply_rr_ab(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rarrb_b(stack_a, stack_b, *s_b, i))
				j = apply_rarrb_ab(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrarb_b(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rrarb_ab(stack_a, stack_b, s_a, s_b, i);
			else if (j == calculate_rrr_b(stack_a, stack_b, *s_a, *s_b, i))
				j = apply_rrr_ab(stack_a, stack_b, s_a, s_b, i);
			else
				i++;
		}
	}
}

void	sort_big_numbers(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
// 	int	i;

// 	i = 0;
	push_b(stack_a, stack_b, size_a, size_b);
	if (*size_a > 3)
		push_b(stack_a, stack_b, size_a, size_b);
	sort_b(stack_a, stack_b, size_a, size_b);
	if (*size_a == 3)
		sort_3_numbers(stack_a, *size_a);
	sort_a(stack_a, stack_b, size_a, size_b);
	// while (i != find_min_value(stack_a, *size_a))
	// 	i++;
	// if (i < *size_a - i)
	// {
	// 	while (stack_a[0] != find_min_value(stack_a, *size_a))
	// 		rotate_a(stack_a);
	// }
	// else
	// 	while (stack_a[0] != find_min_value(stack_a, *size_a))
	// 		reverse_rotate_a(stack_a, *size_a);
}
