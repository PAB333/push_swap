/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:36:23 by pibreiss          #+#    #+#             */
/*   Updated: 2025/01/25 19:18:59 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		count_int(int argc, char **argv);
int		*fill_stack(int argc, char **argv, int size_stack_a);
char	**ft_split(char *s, char c);
long	ft_atoi(char *nbr);
int		count_words(char *s, char c);
void	free_temp(char **temp);
int		double_check(int *stack_a, int argc, char **argv);
void	error_and_exit(void);
int		it_is_sorted(int *stack_a, int size_stack_a);
void	char_error_check(int argc, char **argv);
void	swap_a(int *stack_a, int size_stack_a);
void	swap_b(int *stack_b, int size_stack_b);
void	swap_a_and_swap_b(int *a, int *b, int size_stack_a, int size_stack_b);
void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	rotate_a(int *stack_a);
void	rotate_b(int *stack_b);
void	rotate_a_and_b(int *stack_a, int *stack_b);
void	reverse_rotate_a(int *stack_a, int size_stack_a);
void	reverse_rotate_b(int *stack_b, int size_stack_b);
void	rrr(int *stack_a, int *stack_b, int size_stack_a, int size_stack_b);
void	sort_3_numbers(int *stack_a, int size_stack_a);
void	set_size(int *size_stack_a, int *size_stack_b, int ac, char **av);
void	sort_big_numbers(int *stack_a, int *stack_b, int *size_a, int *size_b);
int		calculate_rotate_ab(int *stack_a, int *stack_b, int s_a, int s_b, int pos);
int		find_place_in_b(int *stack_a, int *stack_b, int s_b, int pos);
int		find_place_in_b_w_nbr(int *stack_b, int s_b, int nbr);
int		calculate_rrr(int *stack_a, int *stack_b, int s_a, int s_b, int pos);
int		calculate_rr(int *stack_a, int *stack_b, int s_b, int pos);
int		calculate_rarrb(int *stack_a, int *stack_b, int s_b, int pos);
int		calculate_rrarb(int *stack_a, int *stack_b, int s_a, int s_b, int pos);
int		apply_rr(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos);
int		apply_rarrb(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos);
int		apply_rrarb(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos);
int		apply_rrr(int *stack_a, int *stack_b, int *s_a, int *s_b, int pos);
int		find_max_value(int *stack, int size);

#endif