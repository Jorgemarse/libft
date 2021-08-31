/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:28:45 by jorge             #+#    #+#             */
/*   Updated: 2021/08/24 17:50:13 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
write the string in the folder description
*/

void	ft_putstr_fd(char *s, int fd)
{	
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
