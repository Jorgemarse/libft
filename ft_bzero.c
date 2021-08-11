/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:58:21 by jormarti          #+#    #+#             */
/*   Updated: 2021/08/11 18:09:47 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char			*text;
	unsigned long int		i;

	i = 0;
	text = (unsigned char *)s;
	while (i < n)
	{
		text[i] = 0;
		i++;
	}
}
