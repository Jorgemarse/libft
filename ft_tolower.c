/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:09:55 by jorge             #+#    #+#             */
/*   Updated: 2021/07/19 18:28:17 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    The tolower() function converts an upper-case letter to the correspond-
     ing lower-case letter.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
