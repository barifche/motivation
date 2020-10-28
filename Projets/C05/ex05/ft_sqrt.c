/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:06:23 by maba              #+#    #+#             */
/*   Updated: 2020/10/26 17:45:23 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	i = 1;
   if (nb == 0)
	   return (0);
	if (nb / i == i)
			return (i);

	while (i < nb / 2 && (nb / i ) != i)
	{
		i++;
	}
	if (nb == i * i)
		return (i);
	else
		return (0);
}

int main(void)
{
	int a = 144;
	printf("%d\n", ft_sqrt(a));
}

