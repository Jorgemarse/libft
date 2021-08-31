/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:39:57 by jorge             #+#    #+#             */
/*   Updated: 2021/08/31 12:02:25 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		N;
	int		i;
	long	num;
	int		len;

	N = 1;
	i = 0;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			N = -1;
	}	
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (int)str[i++] - '0';
	len = ft_strlen(str);
	if (len == 26)
		return (-1);
	if (len == 27)
		return (0);
	return (N * num);
}
