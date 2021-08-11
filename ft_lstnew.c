/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:15:50 by jorge             #+#    #+#             */
/*   Updated: 2021/07/19 20:20:00 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Reserve memory and return a new element. The variable 'content' is initialized
	using the value of the 'content' parameter. The
	variable 'next' is initialized with NULL.
*/

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if(!new)
        return(NULL);
    new->content = content;
    new->next = NULL;
    return(new);
}