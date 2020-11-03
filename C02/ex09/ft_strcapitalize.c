/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:52:30 by gamartin          #+#    #+#             */
/*   Updated: 2020/11/03 11:20:29 by gamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test(char s)
{
	if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122) || (s >= 48 && s <= 57))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (ft_test(str[i - 1]) != 0 || str[i] == str[0])
				str[i] = str[i] - 32;
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			if (ft_test(str[i - 1]) != 0 || str[i] == str[0])
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
