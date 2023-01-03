/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:47:38 by davgarci          #+#    #+#             */
/*   Updated: 2023/01/03 17:03:24 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;
	int		len;

	head_a = malloc(sizeof(t_list));
	head_b = NULL;
	parsing(argc, argv);
	create(argc, head_a, argv);
	doubles(head_a);
	add_order(head_a);
	len = ft_lstsize(head_a);
	if (len < 85)
		algorithm1(&head_a, &head_b);
	if (len >= 85)
		algorithm2(&head_a, &head_b);
	return (0);
}
