/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:24:18 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/20 13:28:55 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    
    i = 0;
    if (!*little)
        return ((char *)big);
    while (big[i] && (i + ft_strlen(little)) <= len)
    {
        if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
            return ((char *) &big[i]);
        i++;
    }
    return (NULL)
}
