/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:49:10 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:49:11 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_data *a)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->array[0];
		a->array[0] = a->array[1];
		a->array[1] = tmp;
		ft_printf("sa\n");
	}
}

void	ft_swap_b(t_data *b)
{
	int	tmp;

	if (b->size > 1)
	{
		tmp = b->array[0];
		b->array[0] = b->array[1];
		b->array[1] = tmp;
		ft_printf("sb\n");
	}
}

void	ft_swap_double(t_data *a, t_data *b)
{
	int	tmp;
	int	tmp1;

	if (b->size > 1 && a->size > 1)
	{
		tmp = b->array[0];
		b->array[0] = b->array[1];
		b->array[1] = tmp;
		tmp1 = a->array[0];
		a->array[0] = a->array[1];
		a->array[1] = tmp1;
		ft_printf("ss\n");
	}
}
