/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:41:39 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/19 10:41:40 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_str_is_alpha(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		c = i;
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		if (c == i)
		{
			return (0);
		}
	}
	return (1);
}
