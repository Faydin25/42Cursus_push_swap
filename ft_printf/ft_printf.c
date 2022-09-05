/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:54:00 by faydin            #+#    #+#             */
/*   Updated: 2022/06/28 15:54:03 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(char c, va_list arg)
{
	int	print_number;

	print_number = 0;
	if (c == 'c')
		print_number += ft_printchar(va_arg(arg, int));
	else if (c == 's')
		print_number += ft_printstr(va_arg(arg, char *));
	else if (c == '%')
		print_number += write(1, "%", 1);
	else if (c == 'p')
	{
		print_number += write(1, "0x", 2);
		print_number += ft_printpointer(va_arg(arg, unsigned long int));
	}
	else if (c == 'd' || c == 'i')
		print_number += ft_printnbr(va_arg(arg, int));
	else if (c == 'u')
		print_number += ft_printunbr(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		print_number += ft_printx(va_arg(arg, int), c);
	return (print_number);
}

int	ft_printf(const char *str, ...)
{
	int			print_number;
	int			i;
	va_list		arg;

	i = 0;
	print_number = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_number += format(str[++i], arg);
			i++;
		}
		else
			print_number += ft_printchar(str[i++]);
	}
	return (print_number);
}
