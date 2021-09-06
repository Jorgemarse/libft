/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:18 by jormarti          #+#    #+#             */
/*   Updated: 2021/09/06 17:10:28 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Show if it's a number or not.
*/

int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') \
		 || (c >= 'A' && c <= 'Z') \
		 || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}
