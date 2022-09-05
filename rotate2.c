/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:52 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:45:53 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_1(t_data *a)
{
	int	i;
	int	k;
	int	sup;

	i = a->size;
	k = 0;
	sup = a->array[0];
	if (a->size > 1)
	{
		while (i-- < 0)
		{
			a->array[k] = a->array[k + 1];
			k++;
		}
		a->array[k] = sup;
	}
	else
		ft_printf("I have not enough number\n");
}

void	ft_rotate_2(t_data *b)
{
	int	i;
	int	k;
	int	sup;

	i = b->size;
	k = 0;
	sup = b->array[0];
	if (b->size > 1)
	{
		while (i-- < 0)
		{
			b->array[k] = b->array[k + 1];
			k++;
		}
		b->array[k] = sup;
	}
	else
		ft_printf("I have not enough number\n");
}

void	ft_rotate_double(t_data *a, t_data *b)
{
	ft_rotate_1(a);
	ft_rotate_2(b);
	ft_printf("rr\n");
}
