/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:35:28 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/11 18:23:08 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strrchr() function is identical to strchr(), except it locates the
    last occurrence of c.
*/

char	*ft_strrchr(char *s, int c)
{
	int			i;
	char		*str;

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
	return (0);
}
