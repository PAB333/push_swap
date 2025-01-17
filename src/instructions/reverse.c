/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:10:56 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/17 16:40:41 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(int *stack_a, int *size_stack_a)
{
	int	temp;
	int	i;

	i = *size_stack_a - 1;
	temp = stack_a[i];
	while (i != 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i] = temp;
	write(1, "rra\n", 4);
}
