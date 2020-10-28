/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:21:57 by maba              #+#    #+#             */
/*   Updated: 2020/10/18 13:56:17 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;
	unsigned int y;
	unsigned int z;

	i = 0;
	n = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < nb)
	{
		n++;
	}
	z = n + i;
	while (i <= z)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char a[] = "Salut";

	char b[] = "Cherif";
	printf("%s", ft_strncat(a, b , 3));
	return (0);
}
