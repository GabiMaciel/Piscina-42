/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:26:35 by gamartin          #+#    #+#             */
/*   Updated: 2020/11/02 16:27:30 by gamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int np;

	if (n < 0)
	{
		np = n * (-1);
		ft_putchar('-');
	}
	else
	{
		np = n;
	}
	if (np >= 10)
	{
		ft_putnbr(np / 10);
		ft_putnbr(np % 10);
	}
	else
	{
		ft_putchar(np + '0');
	}
}
