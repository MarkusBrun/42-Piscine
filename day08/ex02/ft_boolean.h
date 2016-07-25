/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:40:46 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/23 16:39:56 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(x)		((x % 2) == 0) ? TRUE : FALSE
# define EVEN_MSG	"I have an even number of arguments\n"
# define ODD_MSG		"I have an odd number of arguments\n"
# define SUCCESS		0
# define TRUE		1
# define FALSE		0

typedef int	t_bool;

#endif
