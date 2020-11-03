/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:12:57 by gamartin          #+#    #+#             */
/*   Updated: 2020/11/02 12:44:54 by gamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char x;
	char y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			write(1, " ", 1);
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (x < 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
