/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:57:55 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 03:16:34 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	push_a(t_list **head_a, t_list **head_b)
{
	t_list	*ptr1;

	if (head_b[0] == NULL)
		return ;
	ptr1 = head_b[0];
	head_b[0] = head_b[0]->next;
	ptr1->next = head_a[0];
	head_a[0] = ptr1;
	write(1, "pa\n", 3);
}

void	push_b(t_list **head_a, t_list **head_b)
{
	t_list	*ptr1;

	if (head_a[0] == NULL)
		return ;
	ptr1 = head_a[0];
	head_a[0] = head_a[0]->next;
	ptr1->next = head_b[0];
	head_b[0] = ptr1;
	write(1, "pb\n", 3);
}
