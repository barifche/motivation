/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:54:39 by maba              #+#    #+#             */
/*   Updated: 2020/10/10 23:11:44 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affich_2comb(int a, int b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (a < 98)
		{
			write(1, ", ", 2);
		}
		if (++b > 99)
		{
			b = ++a + 1;
		}
	}
}
