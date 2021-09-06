/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:35:28 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/06 17:09:17 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strrchr() function is identical to strchr(), except it locates the
    last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*str;

	i = ft_strlen(s);
	str = (char *)s;
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (NULL);
}
