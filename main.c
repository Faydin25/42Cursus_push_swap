/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:47:23 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 16:58:33 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_the_list(t_data *a, t_data *b)
{
	ft_index(a);
	ft_send_b(a, b);
	ft_send_a(a, b);
}

int	main(int ac, char **av)
{
	t_data	*a;
	t_data	*b;
	char	*p;

	if (ac < 1)
		return (0);
	a = malloc(sizeof(t_data));
	b = malloc(sizeof(t_data));
	a->size = 0;
	b->size = 0;
	av++;
	p = ft_double_to_half(av);
	ft_check(p, a, b);
	if (a->size > 1 && a->size < 6)
		ft_sort_smaller_list(a, b);
	else if (a->size > 5 && a->size < 3001)
		ft_sort_the_list(a, b);
	return (0);
}
