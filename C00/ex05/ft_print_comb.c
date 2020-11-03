/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:56:03 by gamartin          #+#    #+#             */
/*   Updated: 2020/11/02 16:24:45 by gamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x == 55 && y == 56 && z == 57)
		;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = 48;
	while (x < 56)
	{
		y = x + 1;
		while (y < 57)
		{
			z = y + 1;
			while (z <= 57)
			{
				ft_print(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
