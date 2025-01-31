/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:32:40 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/31 11:46:10 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error_and_exit(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	char_error_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		exit(0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != ' ')
			{
				if (argv[i][j] != '-' && argv[i][j] != '+')
					error_and_exit();
			}
			j++;
		}
		i++;
	}
}

void	free_temp(char **temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}
}

int	double_check(int *stack_a, int argc, char **argv)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = count_int(argc, argv);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack_a[i] == stack_a[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (-1);
}

int	it_is_sorted(int *stack_a, int size_stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_stack)
	{
		j = i + 1;
		while (j < size_stack)
		{
			if (stack_a[i] > stack_a[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
