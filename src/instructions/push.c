/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:09:53 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/13 18:19:34 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(int *stack_a, int *stack_b, int max_size)
{
	int	i;
	int	size_stack_b;

	size_stack_b = stack_size(stack_b, max_size);
	i = stack_size(stack_a, max_size);
	if (size_stack_b == 0)
		return;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < size_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b, int max_size)
{
	int	i;
	int	size_stack_a;

	size_stack_a = stack_size(stack_a, max_size);
	i = stack_size(stack_b, max_size);
	if (size_stack_a == 0)
		return;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < size_stack_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}