/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions_ba.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:51:16 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 01:12:32 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	apply_rr_ba(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (stack_b[0] != nbr && find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		rotate_a_and_b(stack_a, stack_b);
	while (stack_b[0] != nbr)
		rotate_b(stack_b);
	while (find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		rotate_a(stack_a);
	push_a(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rarrb_ba(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		rotate_a(stack_a);
	while (stack_b[0] != nbr)
		reverse_rotate_b(stack_b, *s_b);
	push_a(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rrarb_ba(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		reverse_rotate_a(stack_a, *s_a);
	while (stack_b[0] != nbr)
		rotate_b(stack_b);
	push_a(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rrr_ba(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_b[pos];
	while (stack_b[0] != nbr && find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		rrr(stack_a, stack_b, *s_a, *s_b);
	while (stack_b[0] != nbr)
		reverse_rotate_b(stack_b, *s_b);
	while (find_place_in_a_w_nbr(stack_a, *s_a, nbr) > 0)
		reverse_rotate_a(stack_a, *s_a);
	push_a(stack_a, stack_b, s_a, s_b);
	return (-1);
}
