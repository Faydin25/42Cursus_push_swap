/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_five_arg_continuation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:22 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:53:25 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index(t_data *data, int *tmp, int x)
{
	int	i;

	i = 0;
	while (i < data->size)
	{
		if (data->array[i] == tmp[x])
			return (i);
		i++;
	}
	return (-1);
}

void	ft_finish_upto_five(t_data *a, t_data *b)
{
	if (b->array[0] < b->array[1])
		ft_swap_b(b);
	ft_three_arg(a, b);
	ft_push_a(a, b);
	ft_push_a(a, b);
}

void	ft_second(t_data *a, t_data *b)
{
	int	*tmp;
	int	second_index;

	tmp = ft_sort_before_index(a);
	second_index = ft_get_index(a, tmp, 0);
	if (second_index == 0)
		ft_push_b(a, b);
	else if (second_index == 1)
	{
		ft_swap_a(a);
		ft_push_b(a, b);
	}
	else if (second_index == 2)
	{
		ft_rotate_a(a);
		ft_rotate_a(a);
		ft_push_b(a, b);
	}
	else if (second_index == 3)
	{
		ft_reverse_rotate_a(a);
		ft_push_b(a, b);
	}
	ft_finish_upto_five(a, b);
}

void	ft_first_next(t_data *a, t_data *b, int x)
{
	if (x == 4)
	{
		ft_reverse_rotate_a(a);
		ft_push_b(a, b);
	}
	ft_second(a, b);
}

void	ft_five_arg(t_data *a, t_data *b)
{
	int	*tmp;
	int	first_index;

	tmp = ft_sort_before_index(a);
	first_index = ft_get_index(a, tmp, 0);
	if (first_index == 0)
		ft_push_b(a, b);
	else if (first_index == 1)
	{
		ft_swap_a(a);
		ft_push_b(a, b);
	}
	else if (first_index == 2)
	{
		ft_rotate_a(a);
		ft_swap_a(a);
		ft_push_b(a, b);
	}
	else if (first_index == 3)
	{
		ft_reverse_rotate_a(a);
		ft_reverse_rotate_a(a);
		ft_push_b(a, b);
	}
	ft_first_next(a, b, first_index);
}
