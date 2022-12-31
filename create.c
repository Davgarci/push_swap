/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:10:28 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 03:14:48 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	create(int argc, t_list *head_s1, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		add_nodes(head_s1, ft_atoi_long(argv[i]));
		i++;
	}
}

void	add_nodes(t_list *head, int data)
{
	t_list	*ptr;
	t_list	*new;

	if (head->nbr == '\0')
	{
		head->nbr = data;
		return ;
	}
	ptr = head;
	new = (t_list *)malloc(sizeof(t_list));
	new->nbr = data;
	new->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
