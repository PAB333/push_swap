/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:23:56 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/24 19:25:32 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	apply_rr(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
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

int	apply_rarrb(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
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

int	apply_rrarb(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
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

int	apply_rrr(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos)
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