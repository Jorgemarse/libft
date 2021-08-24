/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:38:05 by jorge             #+#    #+#             */
/*   Updated: 2021/08/18 21:14:51 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
write the integer in the folder descriptor
*/

void    ft_putnbr_fd(int n, int fd)
{
    long num;

    num = n;
    if (num == -2147483648)
        write(fd, "-2147483648", 11);
    else
    {
        if (num < 0)
        {
            ft_putchar_fd('-', fd);
            num = num * -1;
        }
        if (num > 9)
        {
            ft_putnbr_fd(num / 10, fd);
            ft_putnbr_fd(num % 10, fd);
        }
        else    ft_putchar_fd(num + '0', fd);
    }
}
