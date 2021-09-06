/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:21:03 by jorge             #+#    #+#             */
/*   Updated: 2021/09/06 17:10:19 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Add new to the biginning of the list.
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}
