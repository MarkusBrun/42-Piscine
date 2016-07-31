/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 13:59:13 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 13:59:14 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*rush00(int x, int y, int i, int j)
{
	int		count;
	char	*ref;

	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && (i == 1 || i == x))
				|| (j == y && (i == 1 || (i == x && j != 1))))
				ref[count] = 'o';
			if ((j > 1 && j < y) && (i == 1 || i == x))
				ref[count] = '|';
			if ((j == 1 || j == y) && (i > 1 && i < x))
				ref[count] = '-';
			if ((j > 1 && j < y) && (i > 1 && i < x))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count++] = ('\n' + (j++ * 0));
	}
	return (ref);
}

char	*rush01(int x, int y, int i, int j)
{
	int		count;
	char	*ref;

	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				ref[count] = '/';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				ref[count] = '\\';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = '*';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count++] = ('\n' + (j++ * 0));
	}
	return (ref);
}

char	*rush02(int x, int y, int i, int j)
{
	int		count;
	char	*ref;

	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 || (i == x && i != 1)) && j == 1)
				ref[count] = 'A';
			if ((i == 1 || (i == x && i != 1)) && j == y && j != 1)
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count++] = ('\n' + (j++ * 0));
	}
	return (ref);
}

char	*rush03(int x, int y, int i, int j)
{
	int		count;
	char	*ref;

	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				ref[count] = 'A';
			if ((j == 1 || j == y) && i == x && x != 1)
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count++] = ('\n' + (j++ * 0));
	}
	return (ref);
}

char	*rush04(int x, int y, int i, int j)
{
	int		count;
	char	*ref;

	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				ref[count] = 'A';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count++] = ('\n' + (j++ * 0));
	}
	return (ref);
}
