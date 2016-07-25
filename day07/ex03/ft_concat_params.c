/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:31:40 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/21 11:31:40 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int d;

	d = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\n';
	i++;
	while (src[d] != '\0')
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		total;

	if (argv[1] == 0)
	{
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		total += ft_strlen(argv[i]);
		i++;
	}
	str = malloc(sizeof(*str) * total);
	ft_strcpy(str, argv[1]);
	i = 2;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
	}
	return (str);
}
