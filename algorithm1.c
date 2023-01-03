/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 03:46:08 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/03 14:25:55 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	algorithm1(t_list **head_a, t_list **head_b)
{
	if (order_validation(*head_a) == 1)
		return (0);
	while (*head_a)
	{
		if (order_validation(*head_a))
			break ;
		if (ft_lstsize(*head_a) == 3)
		{
			algorithm_for3(head_a);
			break ;
		}
		while (find_num(*head_a, find_min(*head_a)) != 0)
		{
			if (find_num(*head_a, find_min(*head_a))
				<= (ft_lstsize(*head_a) / 2))
				rotate_a(head_a);
			else
				rev_rotate_a(head_a);
		}
		if (find_num(*head_a, find_min(*head_a)) == 0)
			push_b(head_a, head_b);
	}
	while (*head_b)
		push_a(head_a, head_b);
	return (0);
}
