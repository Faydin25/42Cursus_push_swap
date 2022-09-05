/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smaller_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:11 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:48:11 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_smaller_list(t_data *a, t_data *b)
{
	if (a->size == 2)
	{
		if (a->array[0] > a->array[1])
			ft_swap_a(a);
	}
	else if (a->size == 3)
		ft_three_arg(a, b);
	else if (a->size == 4)
		ft_four_arg(a, b);
	else if (a->size == 5)
		ft_five_arg(a, b);
	ft_clear(a, b);
}
