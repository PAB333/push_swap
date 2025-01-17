/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:26:34 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/13 19:50:43 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		i;
	int		max_size;

	i = 0;
	char_error_check(argc, argv);
	stack_a = fill_stack(argc, argv);
	max_size = count_int(argc, argv);
	stack_b = (int *)malloc(sizeof(int) * max_size);
	if (!stack_b)
		return (0);
	while (i < stack_size(stack_a, max_size))
	{
		printf("%d ", stack_a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < max_size)
	{
		push_b(stack_a, stack_b, max_size);
		i++;
	}
	rotate_b(stack_b);
	i = 0;
	while (i < stack_size(stack_a, max_size))
	{
		printf("%d ", stack_a[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < stack_size(stack_b, max_size))
	{
		printf("%d ", stack_b[i]);
		i++;
	}
	free(stack_a);
	free(stack_b);
}
