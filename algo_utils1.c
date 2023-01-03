/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 04:36:23 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/02 14:19:55 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	find_min(t_list *head)
{
	t_list	*ptr1;
	int		min;

	if (head->next == NULL)
		return (head->nbr);
	ptr1 = head;
	min = ptr1->nbr;
	while (ptr1->next != NULL)
	{
		if (ptr1->next->nbr < min)
			min = ptr1->next->nbr;
		ptr1 = ptr1->next;
	}
	return (min);
}

int	find_max(t_list *head)
{
	t_list	*ptr1;
	int		max;

	if (head->next == NULL)
		return (1);
	ptr1 = head;
	max = ptr1->nbr;
	while (ptr1->next != NULL)
	{
		if (ptr1->next->nbr > max)
			max = ptr1->next->nbr;
		ptr1 = ptr1->next;
	}
	return (max);
}

int	find_num(t_list *head, int num)
{
	t_list	*ptr1;
	int		count;

	count = 0;
	ptr1 = head;
	ft_lstsize(head);
	while (ptr1->next != NULL)
	{
		if (ptr1->nbr == num)
			return (count);
		ptr1 = ptr1->next;
		count++;
	}
	return (count);
}
