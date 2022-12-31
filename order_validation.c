/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 03:48:17 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 04:52:31 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

/* Returns 0 if is in order, 1 if NOT */
int	order_validation(t_list *head_a)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (head_a->next == NULL)
		return (1);
	ptr1 = head_a;
	ptr2 = head_a->next;
	while (ptr2 != NULL)
	{
		if (ptr1->nbr > ptr2->nbr)
			return (0);
		ptr2 = ptr2->next;
		ptr1 = ptr1->next;
	}
	return (1);
}
