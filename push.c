/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:47:38 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:51:20 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_next(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->size)
		data->array[i] = data->array[i + 1];
}

void	ft_push_a(t_data *a, t_data *b)
{
	int	i;
	int	j;
	int	k;
	int	tmp[3000];

	i = a->size;
	j = 1;
	k = 0;
	if (b->size >= 1)
	{
		while (i-- > 0)
			tmp[j++] = a->array[k++];
		tmp[0] = b->array[0];
		i = a->size + 1;
		k = 0;
		while (i-- > 0 && ++k)
			a->array[k - 1] = tmp[k - 1];
		b->size -= 1;
		a->size += 1;
		ft_next(b);
		ft_printf("pa\n");
	}
	else
		ft_printf("PUSH_A!!!\n");
}

void	ft_push_b(t_data *a, t_data *b)
{
	int	i;
	int	j;
	int	k;
	int	tmp[3000];

	i = b->size;
	j = 1;
	k = 0;
	if (a->size >= 1)
	{
		while (i-- > 0)
			tmp[j++] = b->array[k++];
		tmp[0] = a->array[0];
		i = b->size + 1;
		k = 0;
		while (i-- > 0 && ++k)
			b->array[k - 1] = tmp[k - 1];
		b->size += 1;
		a->size -= 1;
		ft_next(a);
		ft_printf("pb\n");
	}
	else
		ft_printf("PB!!!");
}
