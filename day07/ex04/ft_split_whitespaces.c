/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:28:46 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/21 15:28:47 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		word_counter(char *str)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (str[i - 1] > ' ')
			{
				words++;
			}
		}
		i++;
	}
	words++;
	return (words);
}

char	*char_count(char *str, int *index)
{
	char	*word;
	int		i;
	int		begin;
	int		end;

	i = *index;
	while (str[i] <= ' ')
		i++;
	begin = i;
	while (str[i] > ' ')
		i++;
	end = i;
	*index = i;
	word = (char*)malloc(sizeof(char) * end - begin);
	i = 0;
	while (begin < end)
	{
		word[i] = str[begin];
		begin++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		k;
	int		i;

	array = (char**)malloc(sizeof(char*) * word_counter(str) + 1);
	k = 0;
	i = 0;
	while (k < word_counter(str + 1))
	{
		array[k] = char_count(str, &i);
		k++;
	}
	array[k] = 0;
	return (array);
}