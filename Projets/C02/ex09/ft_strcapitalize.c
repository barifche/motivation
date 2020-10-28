/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:51:30 by maba              #+#    #+#             */
/*   Updated: 2020/10/16 12:41:04 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 char	*ft_strcapitalize(char *str)
{
	int i;

		if  ((str[0] > 96 && str[0] < 123))
			str[0] = str[0] - 32;
	i = 1;
	while ( str[i] != '\0')
	{
		if   (str[i] > 64 && str[i] < 91)
		
			str[i] = str[i] + 32 ;
	i++;
	}
	    i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122))
		{	
			int n;
			n = 0;
			if (str[n] >= 97 && str[n] <= 122)
			str[n] = str[n] - 32;
		}
		i++;
	}
	
  	
	return (str);
}


int		main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}

