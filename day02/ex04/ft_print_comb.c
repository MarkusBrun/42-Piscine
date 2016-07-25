/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:16:28 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/13 20:16:31 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);


void ft_print_comb (void) 
{
	int a;
	int b;
	int c;


	a = '0';
	b = '1';
	c = '1';
	while (a < '8')
	{
		while (b < '9')
		{
			while (c < '9')
			{
			c++;
				if (c > b && b > a)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		b++;
		c = '0';
		}	
	a++;
	b = '0';
	}	
}