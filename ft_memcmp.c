/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:40:24 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/06 17:10:11 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	long unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
