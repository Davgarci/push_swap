/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:37:02 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/03 16:42:50 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	add_order(t_list *head)
{
	int		i;
	int		j;
	int		temp;
	t_list	*ptr1;
	t_list	*ptr2;

	i = 0;
	j = 0;
	temp = 1;
	ptr1 = head;
	ptr2 = head;
	while (ptr1)
	{
		while (ptr2)
		{
			if (ptr1->nbr > ptr2->nbr)
				temp++;
			ptr2 = ptr2->next;
		}
		ptr1->order = temp;
		temp = 1;
		ptr2 = head;
		ptr1 = ptr1->next;
	}
}

void	algorithm2(t_list **head_a, t_list **head_b)
{
	t_count	c;

	c.i = 0;
	c.bits = 0;
	c.size = ft_lstsize(*head_a);
	while (((c.size) >> c.bits) != 0)
		c.bits++;
	while (c.i < c.bits)
	{
		c.j = 0;
		while (c.j < c.size)
		{
			c.temp = head_a[0]->order;
			if ((c.temp >> c.i & 1) == 1)
				rotate_a(head_a);
			else
				push_b(head_a, head_b);
			c.j++;
		}
		while (ft_lstsize(*head_b))
			push_a(head_a, head_b);
		c.j = 0;
		c.i++;
	}
}
