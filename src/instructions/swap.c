/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:09:07 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/20 16:53:09 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(int *stack_a, int size_stack_a)
{
	int	temp;

	if (size_stack_a > 1)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
		write(1, "sa\n", 3);
	}
}

void	swap_b(int *stack_b, int size_stack_b)
{
	int	temp;

	if (size_stack_b > 1)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	swap_a_and_swap_b(int *a, int *b, int size_stack_a, int size_stack_b)
{
	int	temp;

	if (size_stack_a > 1 && size_stack_b > 1)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		write(1, "ss\n", 3);
	}
}
