/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:25:18 by jorge             #+#    #+#             */
/*   Updated: 2021/09/06 17:10:08 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Write the character "c" in the folder descriptor
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
