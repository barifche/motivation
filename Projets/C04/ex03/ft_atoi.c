/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:58:14 by maba              #+#    #+#             */
/*   Updated: 2020/10/21 15:01:07 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_atoi(char *str)
{
	int i;
	i = 0;
	int n;
	n = 0;
	int result;
	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
				i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			n++; 
		}
		i++;
	}
	if ( n % 2 == 0)
		n = 1;
	else 
		n = -1;
	while (str[i] >= '0' &&  str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = n * result;
	return (result);
}

int main(void)
{
	char a[] = "    +++-5----+42685a4";

	printf("%d\n", ft_atoi(a));
	
}
