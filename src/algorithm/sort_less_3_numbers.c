/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_5_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:32:04 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/20 17:22:27 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3_numbers(int *stack_a, int size_of_stack_a)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] < stack_a[2])
		swap_a(stack_a, size_of_stack_a);
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] > stack_a[2])
		rotate_a(stack_a);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] < stack_a[2])
	{
		reverse_rotate_a(stack_a, size_of_stack_a);
		swap_a(stack_a, size_of_stack_a);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
		reverse_rotate_a(stack_a, size_of_stack_a);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
	{
		rotate_a(stack_a);
		swap_a(stack_a, size_of_stack_a);
	}
}
