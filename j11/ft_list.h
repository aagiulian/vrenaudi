/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrenaudi <urenaudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:00:27 by vrenaudi          #+#    #+#             */
/*   Updated: 2018/03/01 15:56:45 by vrenaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

t_list					*ft_create_elem(void	*data);
void					ft_list_push_back(t_list **begin_list, void *data);
void					ft_list_push_front(t_list **begin_list, void *data);
int						ft_list_size(t_list *begin_list);
t_list					*ft_list_last(t_list *begin_list);

#endif
