/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastos <abastos@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:36:54 by abastos           #+#    #+#             */
/*   Updated: 2021/12/16 17:42:10 by abastos          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list args, const char *format, int pos)
{
	if (format[pos] == 'c')
		ft_writer(va_arg(args, int));
	else if (format[pos] == 's')
		ft_str(va_arg(args, char *));
	else if (format[pos] == 'p')
	{
		ft_strwriter("0x");
		ft_putnbr_usigned(va_arg(args, unsigned long long), "0123456789abcdef");
	}
	else if (format[pos] == 'd')
		ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (format[pos] == 'i')
		ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (format[pos] == 'u')
		ft_putnbr_usigned(va_arg(args, unsigned int), "0123456789");
	else if (format[pos] == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format[pos] == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format[pos] == '%')
		ft_writer('%');
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		res;
	va_list	args;

	va_start(args, format);
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_writer(format[i]);
		else
			ft_format(args, format, i += 1);
		i++;
	}
	va_end(args);
	res = ft_count(0) + ft_count(-2);
	return (res);
}
