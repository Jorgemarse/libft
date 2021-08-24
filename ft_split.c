/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:34:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/24 17:50:26 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Return a reserve memory of strings splits "s" 
with the character "c". Must end with null.
*/

size_t	ft_strlen2(char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			len++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	int			start;
	char		**buffer;

	if (!s)
		return (0);
	buffer = (char **)malloc(sizeof(char *) * (ft_strlen2(s, c)) + 1);
	if (!buffer)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			buffer[j++] = ft_substr(s, start, i - start);
		}
		i++;
	}
	buffer[j] = NULL;
	return (buffer);
}
