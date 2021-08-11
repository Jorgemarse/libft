/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:48:34 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/23 12:26:04 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocate memory and return the strings (s1 copy) without set characters 
	at the begining and at the end. 
*/

char	*ft_strtrim(char const *s1, char *set)
{
	size_t	i;
	char	*buffer;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	buffer = ft_substr(s1, 0, i + 1);
	return (buffer);
}

