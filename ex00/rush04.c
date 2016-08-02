/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:53:55 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:53:57 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	ft_firstline04(int ix, int x)
{
	if (ix == 1)
		return ('A');
	else if (ix == x)
		return ('C');
	else
		return ('B');
}

char	ft_lastline04(int ix, int x)
{
	if (ix == 1)
		return ('C');
	else if (ix == x)
		return ('A');
	else
		return ('B');
}

char	ft_putline04(int ix, int iy, int x, int y)
{
	if (iy == 1)
		return (ft_firstline04(ix, x));
	else if (iy == y)
		return (ft_lastline04(ix, x));
	else
	{
		if (ix == 1 || ix == x)
			return ('B');
		else
			return (' ');
	}
}

char	*ft_rush04(int x, int y)
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
			str[i] = ft_putline04(ix, iy, x, y);
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
