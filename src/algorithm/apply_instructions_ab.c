/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions_ab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:23:56 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 01:14:17 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	apply_rr_ab(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_a[pos];
	while (stack_a[0] != nbr && find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		rotate_a_and_b(stack_a, stack_b);
	while (stack_a[0] != nbr)
		rotate_a(stack_a);
	while (find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		rotate_b(stack_b);
	push_b(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rarrb_ab(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_a[pos];
	while (stack_a[0] != nbr)
		rotate_a(stack_a);
	while (find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		reverse_rotate_b(stack_b, *s_b);
	push_b(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rrarb_ab(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_a[pos];
	while (stack_a[0] != nbr)
		reverse_rotate_a(stack_a, *s_a);
	while (find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		rotate_b(stack_b);
	push_b(stack_a, stack_b, s_a, s_b);
	return (-1);
}

int	apply_rrr_ab(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
{
	int	nbr;

	nbr = stack_a[pos];
	while (stack_a[0] != nbr && find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		rrr(stack_a, stack_b, *s_a, *s_b);
	while (stack_a[0] != nbr)
		reverse_rotate_a(stack_a, *s_a);
	while (find_place_in_b_w_nbr(stack_b, *s_b, nbr) > 0)
		reverse_rotate_b(stack_b, *s_b);
	push_b(stack_a, stack_b, s_a, s_b);
	return (-1);
}
