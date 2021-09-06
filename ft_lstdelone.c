/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:05:27 by jorge             #+#    #+#             */
/*   Updated: 2021/09/06 17:10:17 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Free the memory of the argument. 
    Musn`t free the memory of the next
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
		(*del)(lst->content);
	free (lst);
}
