/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:59:28 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/13 19:59:47 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);


void ft_is_negative (int n) 
{
if (n <= 0.0)
{
	ft_putchar('N');
}
else
	ft_putchar('P');
}