/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:58:35 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/03 16:45:24 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rotate_a(t_list **head_a)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (head_a[0]->next == NULL)
		return ;
	ptr1 = head_a[0]->next;
	ptr2 = head_a[0]->next;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;
	ptr2->next = head_a[0];
	head_a[0]->next = NULL;
	head_a[0] = ptr1;
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **head_b)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (head_b[0]->next == NULL)
		return ;
	ptr1 = head_b[0]->next;
	ptr2 = head_b[0]->next;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;
	ptr2->next = head_b[0];
	head_b[0]->next = NULL;
	head_b[0] = ptr1;
	write(1, "rb\n", 3);
}

void	rotate_rr(t_list **head_a, t_list **head_b)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (head_a[0]->next == NULL || head_b[0]->next == NULL)
		return ;
	ptr1 = head_a[0]->next;
	ptr2 = head_a[0]->next;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;
	ptr2->next = head_a[0];
	head_a[0]->next = NULL;
	head_a[0] = ptr1;
	ptr1 = head_b[0]->next;
	ptr2 = head_b[0]->next;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;
	ptr2->next = head_b[0];
	head_b[0]->next = NULL;
	head_b[0] = ptr1;
	write(1, "rr\n", 3);
}
