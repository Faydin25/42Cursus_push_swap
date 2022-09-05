/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:34 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:45:35 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_data *a)
{
	int	i;
	int	sup;

	i = a->size;
	if (i >= 2)
	{
		sup = a->array[a->size - 1];
		while (i > 1)
		{
			a->array[i - 1] = a->array[i - 2];
			i--;
		}
		a->array[0] = sup;
		ft_printf("rra\n");
	}
	else
		ft_printf("REVERSE RA\n");
}

void	ft_reverse_rotate_b(t_data *b)
{
	int	i;
	int	sup;

	i = b->size;
	if (i > 2)
	{
		sup = b->array[b->size - 1];
		while (i > 1)
		{
			b->array[i - 1] = b->array[i - 2];
			i--;
		}
		b->array[0] = sup;
		ft_printf("rrb\n");
	}
	else
		ft_printf("REVERSE RB\n");
}
