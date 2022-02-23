/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastos <abastos@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:39:42 by abastos           #+#    #+#             */
/*   Updated: 2022/02/23 20:05:44 by abastos          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_count(int n)
{
	static int	cnt;

	if (n == -2)
		cnt = 0;
	else
		cnt += n;
	return (cnt);
}

void	ft_writer(char c)
{
	ft_count(write(1, &c, 1));
}

void	ft_strwriter(char *str)
{
	ft_count(write(1, str, ft_strlen(str)));
}

void	ft_str(char *str)
{
	if (!str)
		ft_strwriter("(null)");
	else
		ft_strwriter(str);
}
