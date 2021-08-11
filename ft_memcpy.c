/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:20 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/02 13:42:30 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned char		*sourc;
	unsigned long int	i;

	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}

