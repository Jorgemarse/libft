/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:11:40 by jorge             #+#    #+#             */
/*   Updated: 2021/07/21 20:25:36 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Delete and free memory from the argument element.
    The initial pointer must be NULL.
*/

void    ft_lstclear(t_list **lst, void(*del)(void*))
{
    t_list  *elem;
    
    if(lst)
    {
        while(*lst)
        {
            elem = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = elem;
        }
    }
}
