/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 15:25:16 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/16 15:25:17 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int next;

	i = 1;
	next = 1;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (nb);
	}
	while (i <= nb / 2)
	{
		i++;
		while (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int flag;

	flag = 0;
	while (flag != 1)
	{
		flag = ft_is_prime(nb);
		nb++;
	}
	nb--;
	return (nb);
}
