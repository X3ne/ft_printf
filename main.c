/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastos <abastos@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:24:10 by abastos           #+#    #+#             */
/*   Updated: 2021/11/23 15:05:32 by abastos          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

/**
 * make && gcc -Werror -Wall -Wextra -L . libftprintf.a main.c -o exec && ./exec
 */
int	main(void)
{
	long	a = 'a';
	// long	c = -ULONG_MAX;
	// long	d = ULONG_MAX;

	// printf("\n====p====\n");
	// // printf("len = %d\n", printf(" %p %p ", LONG_MIN, LONG_MAX));
	// printf("len = %d", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	// printf("\n=========\n");
	// printf("\n====p====\n");
	// printf("len = %d\n", printf(" %p %p ", &c, &d));
	// printf("len = %d", ft_printf(" %p %p ", &c, &d));
	// printf("\n=========\n");
	printf("\n====i====\n");
	printf("len = %d\n", printf("%i\n", 1));
	printf("len = %d", ft_printf("%i\n", 1));
	printf("\n=========\n");
	printf("\n====c====\n");
	printf("len = %d\n", printf("%c", '\0'));
	printf("len = %d", ft_printf("%c", '\0'));
	printf("\n=========\n");
	printf("\n====d====\n");
	printf("len = %d\n", printf("%d\n", -1));
	printf("len = %d", ft_printf("%d\n", -1));
	printf("\n=========\n");
	printf("\n====s====\n");
	printf("len = %d\n", printf("%s\n", "aa"));
	printf("len = %d", ft_printf("%s\n", "aa"));
	printf("\n=========\n");
	printf("\n====p====\n");
	printf("len = %d\n", printf("%p\n", &a));
	printf("len = %d", ft_printf("%p\n", &a));
	printf("\n=========\n");
	printf("\n====u====\n");
	printf("len = %d\n", printf("%u\n", 99999));
	printf("len = %d", ft_printf("%u\n", 99999));
	printf("\n=========\n");
	printf("\n====x====\n");
	printf("len = %d\n", printf("%x\n", -2342334));
	printf("len = %d", ft_printf("%x\n", -2342334));
	printf("\n=========\n");
	printf("\n====X====\n");
	printf("len = %d\n", printf("%X\n", -2342334));
	printf("len = %d", ft_printf("%X\n", -2342334));
	printf("\n=========\n");

	// int	res;

	// res = printf("i: %i\ni: %i\ni: %i\nc: %c\ns: %s\nadress: %p\n%u\n%x\n%X\n%%", 1234, 4321, 2342334, 'f', "assd", &a, 999999999, 2342334, 2342334);
	// printf("\n====\n%d\n====\n", res);
	// res = ft_printf("i: %i\ni: %i\ni: %i\nc: %c\ns: %s\nadress: %p\n%u\n%x\n%X\n%%", 1234, 4321, 2342334, 'f', "assd", &a, 999999999, 2342334, 2342334);
	// printf("\n====\n%d\n====\n", res);
	// printf("\n=====\n");
	// printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf("\n");
	// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf("\n=====\n");

}
