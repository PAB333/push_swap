/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:09:53 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/17 16:40:25 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	i = *size_a;
	if (size_b == 0)
		return;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*size_a)++;
	(*size_b)--;
	write(1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	i = *size_b;
	if (size_a == 0)
		return;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < *size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	(*size_b)++;
	(*size_a)--;
	write(1, "pb\n", 3);
}