/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:51:11 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:52:39 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "rushstruct.h"

void	ft_print(int n, int i, int x, int y)
{
	if (n > 0)
		ft_putstr(1, " || ");
	ft_putstr(1, g_rushtab[i].rushstr);
	ft_putnbr(x);
	ft_putstr(1, "] [");
	ft_putnbr(y);
	ft_putstr(1, "]");
}

int		ft_error(char *str)
{
	if (!str)
	{
		ft_putstr(1, "Malloc cannot allocate enough memory.\n");
		return (1);
	}
	return (0);
}

int		ft_compare(int x, int y, char *str)
{
	int		i;
	int		n;
	char	*teststr;

	i = 0;
	n = 0;
	while (i <= 4)  //looping for times due to the amount of rushes
	{
		teststr = g_rushtab[i].f(x, y); //compares standard input with rush functions 1-4 returns one if it matches 
		if (ft_error(teststr)) //checks to see if malloc can allocate enough memory
			return (0);
		if (ft_strcmp(str, teststr) == 0) //comparing shape inputted from standard input with the rushes that are stored in the local program 
		{
			ft_print(n, i, x, y); //if there is no difference between the two strings ft_strcmp will equal 0 and then we will proceed to printing the result/ whichever rush match the program finds
			n++; //n increments because of the possibility of the standard input leading to more than one rush
		}
		free(teststr); //free the memory so the address is reusable for executions
		i++; // i increments because we need to go through all the possible rushes
	}
	if (n > 0)
		ft_putchar('\n');
	if (n == 0)
		ft_putstr(1, "aucune\n"); // if it was unable to find a match an error message is displayed
	return (0);
}
