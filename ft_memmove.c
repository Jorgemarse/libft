/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:52:51 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/24 19:45:35 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sourc;

	dest = (char *)dst;
	sourc = (char *)src;
	if (len == 0 || dst == sourc)
		return (dst);
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
