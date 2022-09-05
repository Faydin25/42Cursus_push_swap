/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:46:25 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 16:57:09 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ascii_to_int(char *s)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		a *= 10;
		a += s[i] - 48;
		i++;
	}
	return (a);
}

void	ft_convert_sup(t_data *a, t_data *b, char **tmp, char **new)
{
	while (*tmp)
		free(*tmp++);
	free(new);
	ft_repeat(a, b);
}

void	ft_convert(char *str, t_data *a, t_data *b)
{
	int		i;
	int		count;
	char	**tmp;
	char	**new;

	i = 0;
	count = 0;
	new = ft_split(str, ' ');
	while (new[i])
	{
		a->size++;
		i++;
	}
	a->array = (int *)malloc(sizeof(int) * (a->size));
	b->array = (int *)malloc(sizeof(int) * (a->size));
	i = 0;
	while (new[i] != NULL)
	{
		a->array[i] = ft_ascii_to_int(new[i]);
		i++;
		count++;
	}
	a->size = count;
	tmp = new;
	ft_convert_sup(a, b, tmp, new);
}
