/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:18:48 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/11 18:22:43 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Functions concatenate strings with
    the same input parameters and output result as snprintf(3).
*/

int	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	int		count;

	count = 0;
	i = 0;
	j = 0;
	while (src[count] != '\0')
		count++;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + count);
}
