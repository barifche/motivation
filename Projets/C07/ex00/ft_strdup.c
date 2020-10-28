/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:49:07 by maba              #+#    #+#             */
/*   Updated: 2020/10/27 16:31:00 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int n;
	int j;
	char *dest;
	
	j = 0;
	n = ft_strlen(src);
	if (!(dest = malloc(n + 1 * sizeof(char))))
		return (NULL);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[n] = '\0';
	return (dest);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n",ft_strdup(argv[1]));
	return (0);
}
