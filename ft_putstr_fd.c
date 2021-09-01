/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:28:45 by jorge             #+#    #+#             */
/*   Updated: 2021/09/01 19:49:21 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
write the string in the folder description
*/

void	ft_putstr_fd(char *s, int fd)
{	
	if (!s || !fd)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
