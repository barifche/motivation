/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:45:38 by maba              #+#    #+#             */
/*   Updated: 2020/10/26 14:54:07 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb - 1 && (nb % i) != 0)
	{
		i++;
	}
	if (nb % (i) == 0)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int nb = 7;
	printf("%d\n", ft_is_prime(nb));
}
