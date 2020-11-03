/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpratas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:03:54 by bpratas           #+#    #+#             */
/*   Updated: 2020/10/25 17:19:46 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	function(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('A');
	}
	else if ((i == x && j == 1) || (i == x && j == y))
	{
		ft_putchar('C');
	}
	else if ((i == 1) || (i == x) || (j == 1) || (j == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y && y > 0)
	{
		i = 1;
		while (i <= x && x > 0)
		{
			function(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
