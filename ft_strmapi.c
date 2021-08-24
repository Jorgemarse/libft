/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorge <jorge@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:43:25 by jorge             #+#    #+#             */
/*   Updated: 2021/08/18 18:51:07 by jorge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *buffer;

    i = 0;
    if (!s)
        return(0);
    buffer = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (!buffer)
        return(0);
    while (s[i] != '\0')
    {
        buffer[i] = f(i, s[i]);
        i++;
    }
    buffer[i] = '\0';
    return(buffer);
}
