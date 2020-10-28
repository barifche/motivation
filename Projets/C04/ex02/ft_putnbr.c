/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 12:35:18 by maba              #+#    #+#             */
/*   Updated: 2020/10/21 11:53:09 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	unsigned int i;
	if (nb < 0 )
	{
		ft_putchar('-');
			i = -nb;
	}
	else
		i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i %= 10;  
	}
	ft_putchar(i + '0');

}
int main(void)
{
	int a;
	a = -1548955;
	ft_putnbr(a);
	return (0);
}
