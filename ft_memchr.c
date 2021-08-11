/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:10:25 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/19 17:54:34 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	long unsigned int	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
