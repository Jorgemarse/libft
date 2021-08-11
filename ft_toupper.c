/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:36:58 by jorge             #+#    #+#             */
/*   Updated: 2021/07/19 18:28:54 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    The toupper() function converts a lower-case letter to the corresponding
     upper-case letter.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
