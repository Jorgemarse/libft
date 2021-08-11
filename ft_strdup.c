/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:08:18 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/26 17:00:44 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).
*/

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!buffer)
		return (0);
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
