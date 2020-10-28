/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:28:43 by maba              #+#    #+#             */
/*   Updated: 2020/10/26 14:14:13 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}

int 	main(void)
{
	int a = 4;
	printf("%d\n", ft_iterative_factorial(a));
}
