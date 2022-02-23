/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastos <abastos@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:27:18 by abastos           #+#    #+#             */
/*   Updated: 2022/02/23 19:58:59 by abastos          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_double(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_print_nbr(long n, char *base, long len)
{
	while (n > len - 1)
	{
		ft_print_nbr(n / len, base, len);
		n %= len;
	}
	ft_writer(base[n]);
}

void	ft_putnbr_base(long n, char *base)
{
	long	len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-' || base[len] == ' '
			|| (base[len] >= 9 && base[len] <= 13)
			|| ft_is_double(base + len + 1, base[len]))
			return ;
		len++;
	}
	if (len <= 1)
		return ;
	if (n < 0)
	{
		ft_writer('-');
		ft_print_nbr(-n, base, len);
	}
	else
		ft_print_nbr(n, base, len);
}
