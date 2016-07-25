/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 16:13:42 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/13 16:14:14 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar (char c);

void ft_print_reverse_alphabet (void) 
{
	char i;
	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}
