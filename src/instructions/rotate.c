/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:10:03 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/20 17:08:28 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(int *stack_a)
{
	int	temp;
	int	i;

	temp = stack_a[0];
	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = temp;
	write(1, "ra\n", 3);
}

void	rotate_b(int *stack_b)
{
	int	temp;
	int	i;

	temp = stack_b[0];
	i = 0;
	while (stack_b[i])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = temp;
	write(1, "rb\n", 3);
}

void	rotate_a_and_b(int *stack_a, int *stack_b)
{
	int	temp;
	int	i;

	temp = stack_a[0];
	i = 0;
	while (stack_a[i])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = temp;
	temp = stack_b[0];
	i = 0;
	while (stack_b[i])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = temp;
	write(1, "rr\n", 3);
}
