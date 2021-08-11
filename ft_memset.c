/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:54:42 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/19 18:01:18 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
*/

void	*ft_memset (void *b, int c, size_t len)
{
	unsigned long int		i;
	unsigned char			*text;

	i = 0;
	text = (unsigned char *)b;
	while (i < len)
	{
		text[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

