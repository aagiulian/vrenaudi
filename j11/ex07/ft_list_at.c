/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrenaudi <urenaudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 17:08:10 by vrenaudi          #+#    #+#             */
/*   Updated: 2018/03/01 19:07:15 by vrenaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	tmp = begin_list;
	i = 0;
	while (tmp)
	{
		if (i == nbr)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return ((void*)0);
}
