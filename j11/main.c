/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrenaudi <urenaudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:05:03 by vrenaudi          #+#    #+#             */
/*   Updated: 2018/03/01 15:55:57 by vrenaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", *(int*)(list->data));
		//ft_putstr(list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*list;
	int a = 360;
	int b = 540;

	list = NULL;
	list = ft_create_elem(&a);
	ft_list_push_front(&list, &b);

	print_list(list);
	return (0);
}
