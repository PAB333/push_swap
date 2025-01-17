/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:36:23 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/17 16:31:53 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		count_int(int argc, char **argv);
int		*fill_stack(int argc, char **argv);
char	**ft_split(char *s, char c);
long	ft_atoi(const char *nptr);
int		count_words(char *s, char c);
void	free_temp(char **temp);
int		double_check(int *stack_a, int argc, char **argv);
void	error_and_exit(void);
int		it_is_sorted(int *stack_a, int argc, char **argv);
void	char_error_check(int argc, char **argv);
void	swap_a(int *stack_a, int *size_stack_a);
void	swap_b(int *stack_b, int *size_stack_b);
void	swap_a_and_swap_b(int *a, int *b, int *size_stack_a, int *size_stack_b);
void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	rotate_a(int *stack_a);
void	rotate_b(int *stack_b);
void	rotate_a_and_b(int *stack_a, int *stack_b);
void	reverse_rotate_a(int *stack_a, int *size_stack_a);
void	sort_3_numbers(int *stack_a, int *size_stack_a);
void	set_size(int *size_stack_a, int *size_stack_b, int ac, char **av);

#endif