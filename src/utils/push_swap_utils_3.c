/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:53:48 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/13 18:33:23 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stack_size(int	*stack, int max_size)
{
	int	size;

	size = 0;
	while (stack[size] && size < max_size)
	{
		size++;
	}
	return (size);
}