/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:51:21 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:51:22 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "list.h"

//reading from standard input and appending to the cache
//this returns the first entry of the list
//this function scans the standard input for valid rush ouputs
//this function stores your standard input into a list, we do this so we can handle multible inputs

t_list	*ft_input(void)
{
	int		i;
	char	buf[2];
	t_list	*list;

	list = NULL;
	i = 0;
	while (read(0, buf, 1))
	{
		buf[1] = '\0';
		ft_list_push_back(&list, buf[0]);
		i++;
	}
	return (list);
}
//this function allocates the correct amount of memory so that we do not overflow the stack

char	*ft_listconvert(t_list *list)
{
	int		len;
	int		i;
	char	*str;

	len = ft_list_size(list);
	str = (char*)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = list->c;
		list = list->next;
		i++;
	}
	str[i] = 0;
	return (str);
}
//this function converts our list created from the standard input and extracts the character data inside each list
//we do this so we can access each bit of data stored from ft_input
int		ft_get_y(char *str)
{
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}
// this function checks the y axis checking for new lines which symbolize a new column in each of the rushes
int		ft_get_x(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\n')
		x++;
	return (x);
}
// this function checks the x axis checking for everything except new lines, in other words we are checking each row size to make sure it matches the standard input

int		main(void)
{
	t_list	*shapelist;
	char	*shape;
	int		x;
	int		y;

	shapelist = ft_input();
	if (!shapelist)
		return (0);
	shape = ft_listconvert(shapelist);
	ft_list_clear(&shapelist); //clearing memory because we extracted data using ft_listconvert
	if (!shape)
		return (0);
	x = ft_get_x(shape);
	y = ft_get_y(shape);
	ft_compare(x, y, shape); //this is the meat of the program, this function receives all the data we just generated and extracted from the link lists
	free(shape); //freeing the memory so it can be reused without allocation problems
	return (0);
}
