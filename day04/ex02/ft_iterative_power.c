/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 17:25:46 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/16 17:25:48 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int count;
	int number;

	if (power < 0)
	{
		return (0);
	}
	number = 1;
	count = 0;
	while (count < power)
	{
		number = number * nb;
		count++;
	}
	return (number);
}