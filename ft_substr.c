/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:13:32 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/02 12:13:57 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Return a copy from start in memory until len.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buffer;
	unsigned int	z;
	size_t			i;
	size_t			l;

	i = 0;
	l = 0;
	if (!s)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (0);
	z = (unsigned int)ft_strlen(s);
	if (z < start)
		return (ft_strdup(""));
	l = ft_strlen(s) + start;
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
