/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:19:30 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/14 11:19:33 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);

void ft_putnbr(int nb)
{
	char c;
	int count;
	int num[9];
	count = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		int e;
		
		e = nb % 10;
		num[count] = e;
		count++;
		nb /= 10;
	}
	while (count > 0)
	{
		count--;
		c = num[count] + 48;
		ft_putchar(c);
	}
	ft_putchar('\n');
}