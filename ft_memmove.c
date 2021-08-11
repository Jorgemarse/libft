/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:52:51 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/19 18:00:31 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
*/

void	*ft_memmove (void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sourc;

	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	if (sourc < dest)
	{
		while (len)
		{
			len--;
			dest[len] = sourc[len];
		}
	}
	else
	{
		while (len)
		{
			len--;
			*dest++ = *sourc++;
		}
	}
	return (dst);
}
