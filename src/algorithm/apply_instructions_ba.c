/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions_ba.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:51:16 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:25:34 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	apply_rr_ba(int *stack_a, int *stack_b, int *size, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (stack_b[0] != nbr
		&& find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		rotate_a_and_b(stack_a, stack_b, size);
	while (stack_b[0] != nbr)
		rotate_b(stack_b, size[1]);
	while (find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		rotate_a(stack_a, size[0]);
	push_a(stack_a, stack_b, size);
	return (-1);
}

int	apply_rarrb_ba(int *stack_a, int *stack_b, int *size, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		rotate_a(stack_a, size[0]);
	while (stack_b[0] != nbr)
		reverse_rotate_b(stack_b, size[1]);
	push_a(stack_a, stack_b, size);
	return (-1);
}

int	apply_rrarb_ba(int *stack_a, int *stack_b, int *size, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		reverse_rotate_a(stack_a, size[0]);
	while (stack_b[0] != nbr)
		rotate_b(stack_b, size[1]);
	push_a(stack_a, stack_b, size);
	return (-1);
}

int	apply_rrr_ba(int *stack_a, int *stack_b, int *size, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (stack_b[0] != nbr
		&& find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		rrr(stack_a, stack_b, size);
	while (stack_b[0] != nbr)
		reverse_rotate_b(stack_b, size[1]);
	while (find_place_in_a_w_nbr(stack_a, size[0], nbr) > 0)
		reverse_rotate_a(stack_a, size[0]);
	push_a(stack_a, stack_b, size);
	return (-1);
}
