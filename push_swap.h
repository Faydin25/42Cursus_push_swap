/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:44:08 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 16:46:36 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_data
{
	int		*array;
	int		size;
	int		len;
}	t_data;

size_t	ft_strlen(const char *s);
int		ft_ascii_to_int(char *s);
int		*ft_sort_before_index(t_data *b);
int		ft_make_pivot(t_data *s);
int		ft_get_index(t_data *data, int *p, int x);
char	*ft_double_to_half(char **s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin_second(char *s1, char *s2);
int		ft_check(char *str, t_data *a, t_data *b);
void	ft_repeat(t_data *a, t_data *b);
void	ft_true_location(t_data *a, t_data *b);
void	ft_go_there(t_data *a, t_data *b, int i);
void	ft_plus_minus_check(char *str, t_data *a, t_data *b);
void	ft_convert(char *str, t_data *a, t_data *b);
void	ft_clear(t_data *a, t_data *b);
void	ft_push_a(t_data *a, t_data *b);
void	ft_push_b(t_data *a, t_data *b);
void	ft_swap_a(t_data *a);
void	ft_swap_b(t_data *b);
void	ft_swap_double(t_data *a, t_data *b);
void	ft_rotate_a(t_data *a);
void	ft_rotate_b(t_data *b);
void	ft_rotate_1(t_data *a);
void	ft_rotate_2(t_data *b);
void	ft_rotate_double(t_data *a, t_data *b);
void	ft_reverse_rotate_a(t_data *a);
void	ft_reverse_rotate_b(t_data *b);
void	ft_reverse_rotate_1(t_data *a);
void	ft_reverse_rotate_2(t_data *b);
void	ft_reverse_rotate_double(t_data *a, t_data *b);
void	ft_next(t_data *data);
void	ft_index(t_data *a);
void	ft_sort_smaller_list(t_data *a, t_data *b);
void	ft_last_change_for_three(t_data *a, t_data *b);
void	ft_three_arg(t_data *a, t_data *b);
void	ft_four_arg(t_data *a, t_data *b);
void	ft_next_for_four(t_data *a, t_data *b, int x, int y);
void	ft_five_arg(t_data *a, t_data *b);
void	ft_support(t_data *a, t_data *b);
void	ft_first_next(t_data *a, t_data *b, int x);
void	ft_second(t_data *a, t_data *b);
void	ft_finish_upto_five(t_data *a, t_data *b);
void	ft_send_b(t_data *a, t_data *b);
void	ft_sort_the_list(t_data *a, t_data *b);
void	ft_send_a(t_data *a, t_data *b);
void	ft_preparation_a(t_data *a, t_data *b, int index);
void	ft_send_a_sup(t_data *a, t_data *b, int *p);
int		ft_preparation_b(t_data *a, t_data *b, int *p);
int		*ft_calculate(t_data *a, t_data *b);
int		ft_floor(t_data *a, int x, int len);
int		ft_min(int *p, int len);

char	**ft_split(const char *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ftcount(char const *s, char c);
size_t	ft_strlen(const char *s);

#endif
