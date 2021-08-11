/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:25:53 by jorge             #+#    #+#             */
/*   Updated: 2021/07/26 16:44:15 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Iter in the list and apply the function 'f' 
    to the content of each element.
*/

void    ft_lstiter(t_list *lst, void (*f)(void*))
{   
    if(!lst)
        return ;    
    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}
