/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastos <abastos@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:32:20 by abastos           #+#    #+#             */
/*   Updated: 2022/02/23 20:04:03 by abastos          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_format(va_list args, const char *format, int i);
int		ft_printf(const char *format, ...)__attribute__((format(printf, 1, 2)));
void	ft_putnbr_base(long n, char *base);
void	ft_putnbr_usigned(unsigned long n, char *base);
void	ft_str(char *str);
void	ft_writer(char c);
void	ft_strwriter(char *str);
int		ft_count(int n);
int		ft_strlen(const char *s);

#endif
