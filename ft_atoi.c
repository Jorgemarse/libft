/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:39:57 by jorge             #+#    #+#             */
/*   Updated: 2021/09/01 18:07:12 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		n;
	int		i;
	long	num;
	int		len;

	n = 1;
	i = 0;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			n = -1;
	}	
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (int)str[i++] - '0';
	len = ft_strlen(str);
	if (len == 26)
		return (-1);
	if (len == 27)
		return (0);
	return (n * num);
}
