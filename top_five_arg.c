/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_five_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:16 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:48:17 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_last_change_for_three(t_data *a, t_data *b)
{
	(void)*b;
	if (a->array[1] < a->array[0])
		ft_swap_a(a);
}

void	ft_three_arg(t_data *a, t_data *b)
{
	if (a->array[0] > a->array[1] && a->array[0] > a->array[2])
	{
		if (a->array[1] < a->array[2])
		{
			ft_reverse_rotate_a(a);
			ft_reverse_rotate_a(a);
		}
		else
		{
			ft_swap_a(a);
			ft_reverse_rotate_a(a);
		}
	}
	else if (a->array[1] > a->array[0] && a->array[1] > a->array[2])
	{
		if (a->array[0] > a->array[2])
			ft_reverse_rotate_a(a);
		else
		{
			ft_reverse_rotate_a(a);
			ft_swap_a(a);
		}
	}
	else if (a->array[2] > a->array[1] && a->array[2] > a->array[0])
		ft_last_change_for_three(a, b);
}

void	ft_support(t_data *a, t_data *b)
{
	ft_push_b(a, b);
	ft_push_b(a, b);
	ft_swap_a(a);
	ft_push_a(a, b);
	ft_push_a(a, b);
}

void	ft_four_arg(t_data *a, t_data *b)
{
	if (a->array[0] < a->array[1] && a->array[1] < a->array[2] && \
			a->array[2] < a->array[3])
		return ;
	ft_push_b(a, b);
	ft_three_arg(a, b);
	ft_push_a(a, b);
	ft_rotate_a(a);
	if (a->array[3] > a->array[1])
	{
		if (a->array[3] < a->array[2])
		{
			ft_support(a, b);
		}
	}
	else
	{
		if (a->array[3] < a->array[0])
			ft_reverse_rotate_a(a);
		else
		{
			ft_reverse_rotate_a(a);
			ft_swap_a(a);
		}
	}
}
