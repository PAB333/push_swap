/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:05:58 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/23 16:31:08 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_int(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
				size++;
			i++;
		}
	}
	else
		size = argc - 1;
	return (size);
}

int	*string_to_array_of_int(char **argv, int *stack_a)
{
	int				i;
	int				size;
	long			result;
	char			**temp;

	i = 0;
	size = count_words(argv[1], ' ');
	temp = ft_split(argv[1], ' ');
	while (i < size)
	{
		result = ft_atoi(temp[i]);
		if (result > 2147483647 || result < -2147483648)
		{
			free_temp(temp);
			free(temp);
			free(stack_a);
			error_and_exit();
		}
		stack_a[i] = result;
		i++;
	}
	free_temp(temp);
	free(temp);
	return (stack_a);
}

int	*array_to_array_of_int(int argc, char **argv, int *stack_a)
{
	int				i;
	long			result;

	i = 0;
	while (i < argc - 1)
	{
		result = ft_atoi(argv[i + 1]);
		if (result > 2147483647 || result < -2147483648)
		{
			free(stack_a);
			error_and_exit();
		}
		stack_a[i] = result;
		i++;
	}
	return (stack_a);
}

int	*fill_stack(int argc, char **argv, int size_stack_a)
{
	int	*stack_a;

	stack_a = (int *)malloc(sizeof(int) * size_stack_a);
	if (!stack_a)
		return (0);
	if (argc == 2)
		stack_a = string_to_array_of_int(argv, stack_a);
	else
		stack_a = array_to_array_of_int(argc, argv, stack_a);
	if (!double_check(stack_a, argc, argv))
	{
		free(stack_a);
		write(2, "Error\n", 6);
		exit(0);
	}
	if (!it_is_sorted(stack_a, size_stack_a))
	{
		free(stack_a);
		exit(0);
	}
	return (stack_a);
}
