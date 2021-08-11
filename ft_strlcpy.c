/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:43:02 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/23 12:23:46 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Functions copy strings with
    the same input parameters and output result as snprintf(3).
*/

int	ft_strlcpy (char	*dest, const char	*src, size_t size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
