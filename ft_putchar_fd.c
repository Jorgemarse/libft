/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:25:18 by jorge             #+#    #+#             */
/*   Updated: 2021/08/18 20:48:22 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Write the character "c" in the folder descriptor
*/

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
