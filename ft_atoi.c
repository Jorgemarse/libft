/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:39:57 by jorge             #+#    #+#             */
/*   Updated: 2021/08/02 12:44:22 by jorge            ###   ########.fr       */
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
	int	num;

	N = 0;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			N++;
		str++;
	}	
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (int)*str - '0';
		str++;
	}
	if (N % 2 != 0)
		num = num * (-1);
	return (num);
}

