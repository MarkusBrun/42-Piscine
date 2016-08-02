/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:50:25 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:50:26 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(int fd, char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_compare(int x, int y, char *str);
int		ft_strlen(char *str);

#endif
