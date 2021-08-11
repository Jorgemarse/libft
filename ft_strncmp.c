/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:34:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/02 11:52:09 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		i++;
		s1++;
		s2++;
	}
	if (i != n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}

