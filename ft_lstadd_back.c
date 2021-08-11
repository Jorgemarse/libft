/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:03:46 by jorge             #+#    #+#             */
/*   Updated: 2021/07/21 20:04:51 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Add the new element in the end of the list.
*/

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if(lst != NULL && new != NULL)
    {
        if(*lst == NULL)
            *lst = new;
        else
            (ft_lstlast(*lst))->next = new;
    }
}
