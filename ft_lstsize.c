/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:05:40 by jorge             #+#    #+#             */
/*   Updated: 2021/07/21 19:43:50 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Counts the number of elements of the list. 
*/

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    if (lst ==NULL)
        return(size);
    while(lst != NULL)
    {
        lst = lst->next;
        size++;
    }
    return(size);
}
