/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:03:47 by jormarti          #+#    #+#             */
/*   Updated: 2021/07/19 17:45:33 by jorge            ###   ########.fr       */
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
		return (0);
	ft_bzero (buffer, count * size);
	return (buffer);
}
