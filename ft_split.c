/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:34:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/11 20:17:43 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen2(char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c)
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	int			start;
	char		**buffer;

	i = 0;
	j = 0;
	start = 0;
	if (!s)
		return (0);
	buffer = (char **)malloc(sizeof(char *) * (ft_strlen2(s, c)) + 1);
	if (!buffer)
		return (0);
	while (s[i] != '\0')
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
