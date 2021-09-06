/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:03:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/06 17:10:29 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The calloc() fuction is used to allocate a specified 
	amount of memory and then initialize it to zero
*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long int		i;
	void					*buffer;

	i = 0;
	buffer = malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero (buffer, count * size);
	return (buffer);
}
