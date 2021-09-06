/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:58:47 by jorge             #+#    #+#             */
/*   Updated: 2021/09/06 17:10:22 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Return a string from a integer as a argument.
*/

size_t	ft_strlen_itoa(long number)
{
	size_t	i;

	i = 0;
	if (number == 0)
	{
		i++;
		return (i);
	}
	if (number < 0)
	{
		number = number * -1;
		i++;
	}
	while (number > 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*buffer;
	size_t	size;

	num = n;
	size = ft_strlen_itoa(num);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	buffer[size--] = '\0';
	if (num == 0)
		buffer[0] = '0';
	if (num < 0)
	{
		buffer[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		buffer[size] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (buffer);
}
