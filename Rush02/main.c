/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 13:57:47 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 13:57:49 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display(int index, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(index);
	ft_putstr("] ");
	ft_printit(x, y);
}

void	fill_array(t_rush array[])
{
	array[0] = rush00;
	array[1] = rush01;
	array[2] = rush02;
	array[3] = rush03;
	array[4] = rush04;
}

void	ft_cmptorush(char *buf, int x, int y)
{
	int		i;
	int		notfirst;
	t_rush	rusharray[5];

	i = 0;
	notfirst = 0;
	fill_array(rusharray);
	while (i < 5)
	{
		if (ft_strcmp(buf, rusharray[i](x, y, 1, 1)) == 0)
		{
			if (notfirst > 0)
				ft_putstr(" || ");
			ft_display(i, x, y);
			notfirst++;
		}
		i++;
	}
	if (notfirst == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(void)
{
	int		x[4];
	char	*new;
	char	buf[BUF_SIZE + 1];

	x[2] = 0;
	x[0] = 0;
	x[1] = 0;
	new = (char*)malloc(BUF_SIZE);
	while ((x[3] = read(0, buf, BUF_SIZE)))
	{
		if (buf[0] == '\n')
			x[1]++;
		if (buf[0] != '\n')
			x[0]++;
		buf[x[3]] = '\0';
		new[x[2]++] = buf[0];
	}
	new[x[2]] = '\0';
	if (x[1] != 0)
		x[0] = x[0] / x[1];
	ft_cmptorush(new, x[0], x[1]);
	return (0);
}
