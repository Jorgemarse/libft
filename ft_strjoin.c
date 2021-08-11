/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:10:25 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/23 11:57:49 by jorge            ###   ########.fr       */
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
		return (0);
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buffer)
		return (0);
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

