/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:13:32 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/01 19:42:36 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Return a copy from start in memory until len.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buffer;
	size_t			size;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	size = (size_t)ft_strlen(s);
	if (size < start)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	while (i < len && start + i < size)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
