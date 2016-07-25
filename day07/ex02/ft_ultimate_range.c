/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 10:12:12 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/21 10:12:12 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int *ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *ret;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	*range = (*int)malloc(sizeof(ret) * (size));
	while (min < max)
	{
		range[i] = &min;
		min++;
		i++;
	}
	*range = ret;
	return (range);
}
