/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 13:58:31 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 13:58:31 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUF_SIZE 1

typedef	char*	(*t_rush)(int, int, int, int);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strcmp(char *a, char *b);
char			*rush00(int x, int y, int i, int j);
char			*rush01(int x, int y, int i, int j);
char			*rush02(int x, int y, int i, int j);
char			*rush03(int x, int y, int i, int j);
char			*rush04(int x, int y, int i, int j);
void			ft_printit(int x, int y);

#endif
