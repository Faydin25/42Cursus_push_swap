/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:47:12 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:47:14 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort_before_index(t_data *a)
{
	int	i;
	int	j;
	int	sup;
	int	*tmp;

	i = -1;
	tmp = malloc(sizeof(int) * a->size);
	while (++i < a->size)
		tmp[i] = a->array[i];
	i = -1;
	while (++i < a->size)
	{
		j = i - 1;
		while (++j < a->size)
		{
			if (tmp[i] > tmp[j])
			{
				sup = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = sup;
			}
		}
	}
	return (tmp);
}

void	ft_index(t_data *a)
{
	int	i;
	int	j;
	int	*was;

	i = 0;
	was = ft_sort_before_index(a);
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->array[i] == was[j])
			{
				a->array[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(was);
}
