/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 17:13:43 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/16 17:13:45 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb <= 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
