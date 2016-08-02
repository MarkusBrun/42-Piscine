/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:50:33 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:50:34 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	ft_firstline01(int ix, int x)
{
	if (ix == 1)
		return ('/');
	else if (ix == x)
		return ('\\');
	else
		return ('*');
}

char	ft_lastline01(int ix, int x)
{
	if (ix == 1)
		return ('\\');
	else if (ix == x)
		return ('/');
	else
		return ('*');
}

char	ft_putline01(int ix, int iy, int x, int y)
{
	if (iy == 1)
		return (ft_firstline01(ix, x));
	else if (iy == y)
		return (ft_lastline01(ix, x));
	else
	{
		if (ix == 1 || ix == x)
			return ('*');
		else
			return (' ');
	}
}

char	*ft_rush01(int x, int y)
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
			str[i] = ft_putline01(ix, iy, x, y);
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
