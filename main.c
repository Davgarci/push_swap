/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:47:38 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 16:35:41 by davgarci         ###   ########.fr       */
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
	len = ft_lstsize(head_a);
	// printf("Stack-A: %i\nOrdered: %i\nMin: %i\nMax: %i\n\n", len,
	// 	order_validation(head_a), find_min(head_a), find_max(head_a));
	algorithm1(head_a, head_b);

	//system("leaks -q push_swap");
	return (0);
}