/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:10:56 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 02:06:11 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(int *stack_a, int size_stack_a)
{
	int	temp;
	int	i;

	i = size_stack_a - 1;
	temp = stack_a[i];
	while (i != 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i] = temp;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(int *stack_b, int size_stack_b)
{
	int	temp;
	int	i;

	i = size_stack_b - 1;
	temp = stack_b[i];
	while (i != 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[i] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(int *stack_a, int *stack_b, int *size)
{
	int	temp;
	int	i;

	i = size[0] - 1;
	temp = stack_a[i];
	while (i != 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i] = temp;
	i = size[1] - 1;
	temp = stack_b[i];
	while (i != 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[i] = temp;
	write(1, "rrr\n", 4);
}
