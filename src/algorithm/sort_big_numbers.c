/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:21:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/22 17:48:36 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_big_numbers(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	push_b(stack_a, stack_b, size_a, size_b);
	if (*size_a > 3)
		push_b(stack_a, stack_b, size_a, size_b);
	if (*size_a == 3)
		sort_3_numbers(stack_a, *size_a);
}
