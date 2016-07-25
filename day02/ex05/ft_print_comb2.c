/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:59:49 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/14 20:59:51 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);

void print_two_digits(int n)
{
	int a;
	int b;

	a = n / 10;
	b = n % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
}

void ft_print_comb2 (void) 
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			print_two_digits(i);
			ft_putchar(' ');
			print_two_digits(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}