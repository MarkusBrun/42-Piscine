/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushstruct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:51:02 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:51:03 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHSTRUCT_H
# define RUSHSTRUCT_H

char			*ft_rush00(int x, int y);
char			*ft_rush01(int x, int y);
char			*ft_rush02(int x, int y);
char			*ft_rush03(int x, int y);
char			*ft_rush04(int x, int y);

typedef	struct	s_rush
{
	char		*rushstr;
	char		*(*f)(int, int);
}				t_rush;

t_rush			g_rushtab[] =
{
	{"[rush-00] [", &ft_rush00},
	{"[rush-01] [", &ft_rush01},
	{"[rush-02] [", &ft_rush02},
	{"[rush-03] [", &ft_rush03},
	{"[rush-04] [", &ft_rush04}
};

#endif
