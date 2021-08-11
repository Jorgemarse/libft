/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:50:28 by jorge             #+#    #+#             */
/*   Updated: 2021/07/21 19:57:03 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Return the last element of the list.
*/

t_list  *ft_lstlast(t_list *lst)
{
    if(lst == NULL)
        return(NULL);
    while(lst->next !=NULL)
    {
        lst = lst->next;
    }
    return(lst);
}
