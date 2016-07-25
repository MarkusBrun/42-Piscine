/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:27:44 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/15 10:27:46 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(char *str)
{
	int 	res;
	int 	sign;
	int 	i;
	

	res = 0;
	sign = 1;
	i = 0;	
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i++] != '\0')
	{
		res = res*10 + str[i] - '0';
		return sign*res;

	}
}

int main()
{
	char str[] = "1234";
	int val = ft_atoi(str);
	printf("%d", val);
	return 0;
}