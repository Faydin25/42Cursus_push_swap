/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_the_list2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:34 by faydin            #+#    #+#             */
/*   Updated: 2022/06/29 01:37:32 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *p, int len)
{
	int	min;
	int	index;
	int	i;

	min = INT_MAX;
	i = 0;
	while (i < len)
	{
		if (p[i] < min)
		{
			min = p[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	ft_preparation_b(t_data *a, t_data *b, int *p)
{
	int	len;
	int	sup;
	int	end;

	(void)*a;
	sup = 1;
	len = ft_min(p, b->size);
	end = len;
	if (len > b->size / 2)
	{
		len = b->size - len;
		sup = 0;
	}
	while (len--)
	{
		if (!sup)
			ft_reverse_rotate_b(b);
		else
			ft_rotate_b(b);
	}
	return (end);
}

void	ft_preparation_a(t_data *a, t_data *b, int index)
{
	int	len;
	int	sup;

	len = ft_floor(a, b->array[index], b->size + a->size);
	sup = 1;
	if (len > a->size / 2)
	{
		len = a->size - len;
		sup = 0;
	}
	while (len--)
	{
		if (!sup)
			ft_reverse_rotate_a(a);
		else
			ft_rotate_a(a);
	}
}

void	ft_send_a_sup(t_data *a, t_data *b, int *p)
{
	p = ft_calculate(a, b);
	ft_preparation_b(a, b, p);
	ft_preparation_a(a, b, 0);
	ft_push_a(a, b);
	free(p);
}

void	ft_send_a(t_data *a, t_data *b)
{
	int	p[3000];
	int	i;
	int	sup;
	int	min;

	min = 0;
	while (b->size)
		ft_send_a_sup(a, b, p);
	i = ft_make_pivot(a);
	sup = 1;
	while (i != a->array[min])
		min++;
	if (min > a->size / 2)
	{
		min = a->size - min;
		sup = 0;
	}
	while (min--)
	{
		if (sup == 0)
			ft_reverse_rotate_a(a);
		else
			ft_rotate_a(a);
	}
}
