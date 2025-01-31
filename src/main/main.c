/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:26:34 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:19:12 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		*size_stack;

	char_error_check(argc, argv);
	size_stack = (int *)malloc(sizeof(int) * 2);
	set_size(size_stack, argc, argv);
	stack_a = fill_stack(argc, argv, size_stack);
	stack_b = (int *)malloc(sizeof(int) * count_int(argc, argv));
	if (!stack_b)
	{
		free(size_stack);
		return (0);
	}
	if (size_stack[0] == 2)
		swap_a(stack_a, size_stack[0]);
	else if (size_stack[0] == 3)
		sort_3_numbers(stack_a, size_stack[0]);
	else if (size_stack[0] > 3)
		sort_big_numbers(stack_a, stack_b, size_stack);
	free(size_stack);
	free(stack_a);
	free(stack_b);
}
