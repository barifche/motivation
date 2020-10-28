/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:06:34 by maba              #+#    #+#             */
/*   Updated: 2020/10/28 16:02:14 by maba             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rot_13 (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar( str[i] + 13);
		if (str[i] > 'm' && str[i] <= 'z')
			ft_putchar(str[i] - 13);
		if (str[i] == ' ')
			ft_putchar(str[i]);
		i++;
	}
	return (str);
}

int main (int argc, char *argv[])
{
	(void)argc;
	 ft_rot_13(argv[1]);


}
