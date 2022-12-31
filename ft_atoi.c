/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:48:50 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 01:36:50 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

long	ft_atoi_long(const char *str)
{
	int		i;
	long	dest;
	int		sign;

	i = 0;
	dest = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		dest = dest * 10;
		dest = dest + str[i] - 48;
		i++;
	}
	if (str[i] != '\0')
		error_data_after_num(str[i]);
	error_max_int(dest * sign, sign, i);
	return (dest * sign);
}
