/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:54:11 by maba              #+#    #+#             */
/*   Updated: 2020/10/18 19:19:26 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int 	main(void)
{
	char a[] = "Salut chif cherif comment vas tu ?";
	char b[] = "cherif";
	
	printf("%s", ft_strstr(a, b));

	return (0);
}
