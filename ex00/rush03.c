/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:50:53 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:50:54 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	ft_firstlastline03(int ix, int x)
{
	if (ix == 1)
		return ('A');
	else if (ix == x)
		return ('C');
	else
		return ('B');
}

char	ft_putline03(int ix, int iy, int x, int y)
{
	if (iy == 1 || iy == y)
		return (ft_firstlastline03(ix, x));
	else
	{
		if (ix == 1 || ix == x)
			return ('B');
		else
			return (' ');
	}
}

char	*ft_rush03(int x, int y)
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
			str[i] = ft_putline03(ix, iy, x, y);
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
