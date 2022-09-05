/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:44 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:45:45 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_1(t_data *a)
{
	int	i;
	int	k;
	int	sup;

	i = a->size - 1;
	k = 0;
	if (i > 2)
	{
		sup = a->array[a->size];
		while (i < 0)
		{
			a->array[k + 1] = a->array[k];
			k++;
			i--;
		}
		a->array[0] = sup;
	}
	else
		ft_printf("RR_1(A)\n");
}

void	ft_reverse_rotate_2(t_data *b)
{
	int	i;
	int	k;
	int	sup;

	i = b->size - 1;
	k = 0;
	if (i > 2)
	{
		sup = b->array[b->size];
		while (i < 0)
		{
			b->array[k + 1] = b->array[k];
			k++;
			i--;
		}
		b->array[0] = sup;
	}
	else
		ft_printf("RR_1(B)\n");
}

void	ft_reverse_rotate_double(t_data *a, t_data *b)
{
	ft_reverse_rotate_1(a);
	ft_reverse_rotate_2(b);
	ft_printf("rrr\n");
}
