/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:35:56 by maba              #+#    #+#             */
/*   Updated: 2020/10/27 19:44:31 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int diff;
	
	i =0;
	diff = max - min - 1;
	if (!(tab = malloc(diff * sizeof(int))))
		return (NULL);
	while (i <= diff)
	{
		tab[i] = min + i;
		i++;
	}
	  	return (tab);
}

int main()
{
	int i;
	int resultat;
	resultat = ft_range(1, 5);	

	i = 0;
	while (i < 4)
	{
		printf("%d\n", resultat[i]);
		i++;
	}
	return (0);
}
