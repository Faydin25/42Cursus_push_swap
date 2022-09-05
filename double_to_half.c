/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_to_half.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:41:47 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:43:15 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin_second(char *s1, char *s2)
{
	char	*return_str;
	size_t	i;
	size_t	j;

	return_str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	i = -1;
	j = 0;
	while (s1[++i])
		return_str[i] = s1[i];
	return_str[i] = ' ';
	i++;
	while (s2[j])
		return_str[i++] = s2[j++];
	return_str[i] = '\0';
	free (s1);
	return (return_str);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	dup = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!dup)
	{
		return (NULL);
	}
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_double_to_half(char **s)
{
	int		i;
	char	*p;

	i = 0;
	p = ft_strdup("");
	while (s[i] != NULL)
	{
		p = ft_strjoin_second(p, s[i++]);
	}
	return (p);
}
