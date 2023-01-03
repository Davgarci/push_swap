/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_for3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:58:04 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/03 16:44:49 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"
/*
Case1: 2 1 3
Case2: 3 2 1
Case3: 3 1 2
Case4: 1 3 2
Case5: 2 3 1
*/
void	organize_3(t_list **head_a, int casee)
{
	if (order_validation(*head_a) == 1)
		return ;
	if (casee == 1)
		swap_a(head_a);
	else if (casee == 2)
	{
		swap_a(head_a);
		rev_rotate_a(head_a);
	}
	else if (casee == 3)
		rotate_a(head_a);
	else if (casee == 4)
	{
		swap_a(head_a);
		rotate_a(head_a);
	}
	else if (casee == 5)
		rev_rotate_a(head_a);
}

/*
1 head_a->nbr
2 head_a->next->nbr
2 head_a->next->next->nbr
*/
void	algorithm_for3(t_list **head_a)
{
	if (head_a[0]->next->nbr < head_a[0]->nbr
		&& head_a[0]->nbr < head_a[0]->next->next->nbr)
		organize_3(head_a, 1);
	else if (head_a[0]->next->next->nbr < head_a[0]->next->nbr
		&& head_a[0]->next->nbr < head_a[0]->nbr)
		organize_3(head_a, 2);
	else if (head_a[0]->nbr > head_a[0]->next->nbr
		&& head_a[0]->next->nbr < head_a[0]->next->next->nbr)
		organize_3(head_a, 3);
	else if (head_a[0]->nbr < head_a[0]->next->next->nbr
		&& head_a[0]->next->next->nbr < head_a[0]->next->nbr)
		organize_3(head_a, 4);
	else if (head_a[0]->nbr < head_a[0]->next->nbr
		&& head_a[0]->nbr > head_a[0]->next->next->nbr)
		organize_3(head_a, 5);
}
