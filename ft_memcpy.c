/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:20 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/24 19:44:00 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*dest;
	char				*sourc;
	size_t				i;

	dest = (char *)dst;
	sourc = (char *)src;
	i = 0;
	if (n == 0 || dst == sourc)
		return (dst);
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
