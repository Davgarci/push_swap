/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:53:38 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 03:14:23 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	doubles(t_list *head_a)
{
	int		i;
	t_list	*ptr1;
	t_list	*ptr2;

	ptr1 = head_a;
	ptr2 = head_a;
	while (ptr1->next != NULL)
	{
		ptr2 = ptr1;
		i = ptr2->nbr;
		while (ptr2->next != NULL)
		{
			ptr2 = ptr2->next;
			if (ptr2->nbr == i)
			{
				write(1, "PLEASE DONT REPEAT NUMBERS", 26);
				exit(0);
			}
		}
		ptr1 = ptr1->next;
	}
	return (0);
}

int	error_data_after_num(char c)
{
	write(1, "UNEXPECTED ", 11);
	write(1, &c, 1);
	write(1, " AFTER NUMBER", 13);
	exit(0);
	return (0);
}

int	error_max_int(long dest, int sign, int i)
{
	if (dest < INT_MIN)
	{
		sign = 0;
		write(1, "NUMBER TOO SMALL", 16);
		exit(0);
	}
	if (i > 10 && sign > 0)
	{
		write(1, "NUMBER TOO F*****G BIG", 22);
		exit(0);
	}
	if (dest > INT_MAX)
	{
		write(1, "NUMBER TOO BIG", 14);
		exit(0);
	}
	return (0);
}

int	error_content(char k, char j)
{
	if ((k < '0' || k > '9') && (k != '+' && k != '-'))
	{
		write(1, "PLEASE WRITE ONE NUMBER PER ARGUMENT", 36);
		exit(0);
	}
	if ((k == '+' || k == '-') && j == '\0')
	{
		write(1, "PLEASE WRITE A NUMBER AFTER THE SIGN", 36);
		exit(0);
	}
	return (0);
}

int	parsing(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
		{
			write(1, "PLEASE BE AWARE OF NULL VALUES", 30);
			exit(0);
		}
		while (argv[i][k] != '\0')
		{
			error_content(argv[i][k], argv[i][k+1]);
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
