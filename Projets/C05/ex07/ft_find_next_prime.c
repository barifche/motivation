/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:13:13 by maba              #+#    #+#             */
/*   Updated: 2020/10/26 16:26:39 by maba             ###   ########lyon.fr   */
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

int		ft_find_next_prime(int nb)
{
	while (nb > 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}

int		main(void)
{
	int nb = 80;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
