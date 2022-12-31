/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:58:41 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 03:17:42 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	swap_a(t_list **head_a)
{
	t_list	*ptr;
	t_list	*ptr2;

	if (head_a[0]->next == NULL)
		return ;
	ptr = head_a[0]->next;
	ptr2 = ptr->next;
	head_a[0]->next = ptr2;
	ptr->next = head_a[0];
	head_a[0] = ptr;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **head_b)
{
	t_list	*ptr;
	t_list	*ptr2;

	if (head_b[0]->next == NULL)
		return ;
	ptr = head_b[0]->next;
	ptr2 = ptr->next;
	head_b[0]->next = ptr2;
	ptr->next = head_b[0];
	head_b[0] = ptr;
	write(1, "sb\n", 3);
}

void	swap_ss(t_list **head_a, t_list **head_b)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*ptr3;
	t_list	*ptr4;

	if (head_a[0]->next == NULL || head_b[0]->next == NULL)
		return ;
	ptr1 = head_a[0]->next;
	ptr2 = ptr1->next;
	head_a[0]->next = ptr2;
	ptr1->next = head_a[0];
	head_a[0] = ptr1;
	ptr3 = head_b[0]->next;
	ptr4 = ptr3->next;
	head_b[0]->next = ptr4;
	ptr3->next = head_b[0];
	head_b[0] = ptr3;
	write(1, "ss\n", 3);
}
