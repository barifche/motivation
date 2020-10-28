/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:16:26 by maba              #+#    #+#             */
/*   Updated: 2020/10/17 09:57:37 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}	
	return (s1[i] - s2[i]);
} 
int		main(void)
{
	char r[] = "Hey FRO";
	char f[] = "Hey a";
	printf("%d", ft_strcmp(r,f));
}