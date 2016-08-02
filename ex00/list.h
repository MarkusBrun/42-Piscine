/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 21:53:17 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/31 21:53:18 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>

typedef	struct			s_list
{
	struct s_list		*next;
	char				c;
}						t_list;

t_list					*ft_create_elem(char data);
void					ft_list_push_back(t_list **begin_list, char c);
int						ft_list_size(t_list *begin_list);
void					ft_list_clear(t_list **begin_list);

#endif
