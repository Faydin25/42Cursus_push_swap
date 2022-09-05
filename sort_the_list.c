/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_the_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:56 by faydin            #+#    #+#             */
/*   Updated: 2022/06/29 01:37:22 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_make_pivot(t_data *s)
{
	int		i;
	long	min;
	long	max;

	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	while (i < s->size)
	{
		if (s->array[i] < min)
			min = s->array[i];
		i++;
	}
	return (min);
}

void	ft_send_b(t_data *a, t_data *b)
{
	int	pivot;
	int	i;
	int	nbr;
	int	min;

	i = 0;
	min = ft_make_pivot(a);
	pivot = a->size / 2 + ft_make_pivot(a);
	nbr = a->size / 2;
	i = a->size;
	if (a->size < 3)
		return ;
	while (a->size > i - nbr)
	{
		if (a->array[0] < pivot)
			ft_push_b(a, b);
		else
			ft_rotate_a(a);
	}
	ft_send_b(a, b);
}

int	ft_floor(t_data *s, int x, int len)
{
	int	i;
	int	min;
	int	index;
	int	floor;

	i = 0;
	index = -1;
	floor = len;
	while (i < s->size)
	{
		if (x < s->array[i] && floor > s->array[i])
		{
			floor = s->array[i];
			index = i;
		}
		i++;
	}
	if (index == -1)
	{
		min = ft_make_pivot(s);
		index = 0;
		while (s->array[index] != min)
			index++;
	}
	return (index);
}

int	*ft_calculate(t_data *a, t_data *b)
{
	int	i;
	int	j;
	int	index;
	int	*tmp;

	i = 0;
	tmp = malloc(sizeof(int) * b->size);
	while (i < b->size)
	{
		index = -1;
		if (i > b->size / 2)
			tmp[i] = b->size - i;
		else
			tmp[i] = i;
		j = ft_floor(a, b->array[i], b->size + a->size);
		if (j > a->size / 2)
			j = a->size - j;
		tmp[i] += j;
		i++;
	}
	return (tmp);
}
