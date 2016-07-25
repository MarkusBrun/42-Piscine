/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:48:56 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/20 12:48:57 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (i == 0)
	{
		return (0);
	}
	while (i < argc)
	{
		i++;
	}
	j = i - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		j--;
	}
}
