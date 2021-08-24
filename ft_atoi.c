/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:39:57 by jorge             #+#    #+#             */
/*   Updated: 2021/08/18 21:22:29 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The atoi() function converts the initial portion of the string pointed to
     by str to int representation.
*/

int	ft_atoi(const char *str)
{
	int	N;
	int	i;
	int	num;

	N = 0;
	i = 0;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			N++;
		i++;
	}	
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (int)str[i] - '0';
		i++;
	}
	if (N % 2 != 0)
		num = num * (-1);
	return (num);
}
