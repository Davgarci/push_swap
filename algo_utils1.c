/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 04:36:23 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 04:51:15 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	find_min(t_list *head)
{
	t_list	*ptr1;
	int		min;

	if (head->next == NULL)
		return (1);
	ptr1 = head;
	min = ptr1->nbr;
	while (ptr1->next != NULL)
	{
		if (ptr1->nbr > ptr1->next->nbr)
			min = ptr1->next->nbr;
		ptr1 = ptr1->next;
	}
	return (min);
}
