/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrenaudi <urenaudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:39:18 by vrenaudi          #+#    #+#             */
/*   Updated: 2018/03/01 19:27:44 by vrenaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*list;

	list = *begin_list;
	while (list->next)
	{
		tmp = list;
		if (cmp(tmp->data, data_ref) == 0)
		{
			list = list->next;
			free(tmp);
		}
	}
}
