/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:28:45 by jorge             #+#    #+#             */
/*   Updated: 2021/08/18 20:31:45 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
write the string in the folder description
*/

void    ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
}