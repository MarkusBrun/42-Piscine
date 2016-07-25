/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:16:50 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/21 21:16:51 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*checkupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'K')
			{
				str[i] -= 10;
			}
			else
			{
				str[i] += 16;
			}
		}
		i++;
	}
	return (str);
}

char	*checklower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'k')
			{
				str[i] -= 10;
			}
			else
			{
				str[i] += 16;
			}
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	checkUpper(str);
	checkLower(str);
	return (str);
}
