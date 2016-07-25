/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:40:03 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/22 12:40:04 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sound_the_alarm(void)
{
	write(1, "ALERT!!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while ((s1[i] || s2[i]) && r == 0)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}

void	search_string(char *str)
{
	int i;

	i = ft_strcmp(str, "president");
	if (i == 0)
	{
		sound_the_alarm();
	}
	i = ft_strcmp(str, "attack");
	if (i == 0)
	{
		sound_the_alarm();
	}
	i = ft_strcmp(str, "powers");
	if (i == 0)
	{
		sound_the_alarm();
	}
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	str[1000];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		search_string(str);
		i++;
	}
	return (0);
}
