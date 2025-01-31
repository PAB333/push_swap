/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:09:53 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:19:38 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(int *stack_a, int *stack_b, int *size_stack)
{
	int	i;

	i = size_stack[0];
	if (size_stack[1] == 0)
		return ;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < size_stack[1] - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	size_stack[0]++;
	size_stack[1]--;
	write(1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b, int *size_stack)
{
	int	i;

	i = size_stack[1];
	if (size_stack[0] == 0)
		return ;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < size_stack[0] - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	size_stack[1]++;
	size_stack[0]--;
	write(1, "pb\n", 3);
}
