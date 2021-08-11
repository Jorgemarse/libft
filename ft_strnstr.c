/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:02:28 by jorge             #+#    #+#             */
/*   Updated: 2021/07/26 17:43:36 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.
*/

char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int	x;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = i;
		x = 0;
		while (haystack[j] == needle[x])
		{
			if (needle[x + 1] == '\0' && j < len)
				return (haystack + i);
			j++;
			x++;
		}
		i++;
	}
	return (0);
}

