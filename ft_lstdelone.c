/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:05:27 by jorge             #+#    #+#             */
/*   Updated: 2021/07/21 20:10:45 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Free the memory of the argument. 
    Musn`t free the memory of the next
*/

void    ft_lstdelone(t_list *lst, void  (*del)(void*))
{
    if(lst != NULL)
        (*del)(lst->content);
    free(lst);
}
