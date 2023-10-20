/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:56:30 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/20 13:14:01 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *(const void *s, int c, size_t n)
{
    size_t  i;
    char    *string;

    i = 0;
    string = (void *)s;
    if (s == NULL)
        return (NULL);
    while (i < n)
    {
        if (string[i] == (char)c)
            return (&string[i]);
        i++;
    }
    return (NULL);
}
