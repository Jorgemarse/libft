/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:10:25 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/24 17:51:20 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Join two strings.
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*buffer;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buffer)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		buffer[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		buffer[i + j] = s2[j];
		j++;
	}
	buffer[i + j] = '\0';
	return (buffer);
}
