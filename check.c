/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:46:06 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:55:13 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_repeat(t_data *a, t_data *b)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < a->size)
	{
		while (j < a->size)
		{
			if (a->array[j] == a->array[i])
			{
				ft_printf("Error Repeat\n");
				ft_clear(a, b);
			}
			j++;
		}
		i++;
		j = 1 + i;
	}
}

void	ft_plus_minus_check(char *str, t_data *a, t_data *b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '-' || str[i] == '+') && \
			(str[i + 1] == '-' || str[i + 1] == '+'))
		{
			ft_printf("Error\n");
			ft_clear(a, b);
		}
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == '-' || \
				str[i + 1] == '+'))
		{
			ft_printf("Error\n");
			ft_clear(a, b);
		}
		i++;
	}
	ft_convert(str, a, b);
}

int	ft_check(char *str, t_data *a, t_data *b)
{
	int			i;
	static int	count;

	count = 0;
	i = 0;
	if (!*str)
		ft_clear(a, b);
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == ' ') || \
				str[i] == '-' || str[i] == '+'))
		{
			ft_printf("Error\n");
			ft_clear(a, b);
		}
		i++;
	}
	count++;
	ft_plus_minus_check(str, a, b);
	return (count);
}
