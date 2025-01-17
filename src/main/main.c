/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:26:34 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/17 16:43:12 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		*size_stack_a;
	int		*size_stack_b;
	int		i;

	i = 0;
	char_error_check(argc, argv);
	stack_a = fill_stack(argc, argv);
	stack_b = (int *)malloc(sizeof(int) * count_int(argc, argv));
	if (!stack_b)
		return (0);
	size_stack_a = malloc(sizeof(int));
	size_stack_b = malloc(sizeof(int));
	set_size(size_stack_a, size_stack_b, argc, argv);
	while (i < *size_stack_a)
	{
		printf("%d ", stack_a[i]);
		i++;
	}
	printf("\n");
	if (*size_stack_a == 2)
		swap_a(stack_a, size_stack_a);
	else if (*size_stack_a == 3)
		sort_3_numbers(stack_a, size_stack_a);
	// i = 0;
	// while (i < *size_stack_a)
	// {
	// 	push_b(stack_a, stack_b, size_stack_a, size_stack_b);
	// 	i++;
	// }
	// rotate_b(stack_b);
	i = 0;
	while (i < *size_stack_a)
	{
		printf("%d ", stack_a[i]);
		i++;
	}
	// i = 0;
	// printf("\n");
	// while (i < *size_stack_b)
	// {
	// 	printf("%d ", stack_b[i]);
	// 	i++;
	// }
	free(stack_a);
	free(stack_b);
}
