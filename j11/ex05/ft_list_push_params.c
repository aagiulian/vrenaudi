/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrenaudi <urenaudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:40:01 by vrenaudi          #+#    #+#             */
/*   Updated: 2018/03/01 16:32:53 by vrenaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	int			i;

	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}

int		main(int argc, char **argv)
{
	t_list		*list;
	int			i;

	i = 0;
	list = NULL;
	list = ft_list_push_params(argc, argv);
	while (i < argc)
	{
		printf("%s\n", list->data);
		list = list->next;
		i++;
	}
	return (0);
}
