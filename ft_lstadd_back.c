/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:03:46 by jorge             #+#    #+#             */
/*   Updated: 2021/09/06 17:10:21 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Add the new element in the end of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
			(ft_lstlast(*lst))->next = new;
	}
}
