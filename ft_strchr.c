/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:37:13 by jorge             #+#    #+#             */
/*   Updated: 2021/08/02 13:53:17 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.
*/

char	*ft_strchr(char *s, int c)
{
	int			i;
	int			len;
	char		*t;

	i = 0;
	len = ft_strlen(s);
	t = (char *)s;
	if (!s)
		return(0);
	while ((i < len) && (t[i] != (char)c))
		i++;
	if (i == len)
	{
		if (c != '\0')
			return(0);
	}
	return ((char *)t + i);
}
