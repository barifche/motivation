/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 18:57:36 by maba              #+#    #+#             */
/*   Updated: 2020/10/28 14:01:30 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	if (min > max)
		return (0);
	diff = max - min;
	i = 0;
	*range = malloc(diff * sizeof(int));
	if (!*range)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

int 	main(void)
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, 5, 10));
	return (0);
}
