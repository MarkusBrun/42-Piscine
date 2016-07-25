/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:31:27 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/21 22:31:28 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (k > i)
			return (i);
		else
			return (k);
	}
	else
	{
		if (j < k)
			return (j);
		else if (k < i)
			return (i);
		else
			return (k);
	}
}
