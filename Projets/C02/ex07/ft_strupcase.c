/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:59:01 by maba              #+#    #+#             */
/*   Updated: 2020/10/15 15:28:38 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main	(void)
{
	char *str;
	str = "fouosuley";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
