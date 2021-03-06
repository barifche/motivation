/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:37:32 by maba              #+#    #+#             */
/*   Updated: 2020/10/18 19:30:38 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;
	int y;

	i = 0;
	n = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		n++;
	}
	while (i < n + i)
	{
		dest[i + 1] = src[y];
		i++;
		y++;
	}
	return (dest);
}
