/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:51:28 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:51:28 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	ft_putline00(int ix, int iy, int x, int y)
{
	if (iy == 1 || iy == y)
	{
		if (ix == 1 || ix == x)
			return ('o');
		else
			return ('-');
	}
	else
	{
		if (ix == 1 || ix == x)
			return ('|');
		else
			return (' ');
	}
}

char	*ft_rush00(int x, int y)
{
	int		ix;
	int		iy;
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(char) * ((x + 1) * y) + 1);
	i = 0;
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			str[i] = ft_putline00(ix, iy, x, y);
			ix++;
			i++;
		}
		iy++;
		str[i] = '\n';
		i++;
	}
	str[i] = 0;
	return (str);
}
