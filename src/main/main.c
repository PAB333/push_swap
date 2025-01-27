/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:26:34 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/27 01:10:33 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		size_stack_a;
	int		size_stack_b;

	char_error_check(argc, argv);
	set_size(&size_stack_a, &size_stack_b, argc, argv);
	stack_a = fill_stack(argc, argv, size_stack_a);
	stack_b = (int *)malloc(sizeof(int) * count_int(argc, argv));
	if (!stack_b)
		return (0);
	if (size_stack_a == 2)
		swap_a(stack_a, size_stack_a);
	else if (size_stack_a == 3)
		sort_3_numbers(stack_a, size_stack_a);
	else if (size_stack_a > 3)
		sort_big_numbers(stack_a, stack_b, &size_stack_a, &size_stack_b);
	free(stack_a);
	free(stack_b);
}
