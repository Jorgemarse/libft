/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:27:19 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/06 17:10:13 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memccpy() function copies bytes from string src to string dst.  If
     the character c (as converted to an unsigned char) occurs in the string
     src, the copy stops and a pointer to the byte after the copy of c in the
     string dst is returned.  Otherwise, n bytes are copied, and a NULL
     pointer is returned.

     The source and destination strings should not overlap, as the behavior is
     undefined.
*/

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*sourc;
	unsigned long int	i;
	unsigned char		cc;

	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = sourc[i];
		if (sourc[i] == cc)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
