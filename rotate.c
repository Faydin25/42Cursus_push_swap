/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:45:23 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:45:24 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_data *a)
{
	int	i;
	int	k;
	int	sup;

	i = a->size;
	k = 0;
	sup = a->array[0];
	if (a->size > 1)
	{
		while (i-- > 1)
		{
			a->array[k] = a->array[k + 1];
			k++;
		}
		a->array[k] = sup;
		ft_printf("ra\n");
	}
	else
		ft_printf("Rotate A\n");
}

void	ft_rotate_b(t_data *b)
{
	int	i;
	int	k;
	int	sup;

	i = b->size;
	k = 0;
	sup = b->array[0];
	if (b->size > 1)
	{
		while (i-- > 1)
		{
			b->array[k] = b->array[k + 1];
			k++;
		}
		b->array[k] = sup;
		ft_printf("rb\n");
	}
	else
		ft_printf("Rotate B\n");
}
