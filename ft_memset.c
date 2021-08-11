/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:54:42 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/11 18:22:18 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
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
