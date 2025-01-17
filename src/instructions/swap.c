/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:09:07 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/13 18:20:08 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(int *stack_a, int max_size)
{
	int	temp;
	int	size;

	size = stack_size(stack_a, max_size);
	if (size > 1)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
		write(1, "sa\n", 3);
	}
}

void	swap_b(int *stack_b, int max_size)
{
	int	temp;
	int	size;

	size = stack_size(stack_b, max_size);
	if (size > 1)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	swap_a_and_swap_b(int *stack_a, int *stack_b, int max_size)
{
	int	temp;
	int	size_stack_a;
	int	size_stack_b;

	size_stack_a = stack_size(stack_a, max_size);
	size_stack_b = stack_size(stack_b, max_size);
	if (size_stack_a > 1 && size_stack_b > 1)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		write(1, "ss\n", 3);
	}
}
