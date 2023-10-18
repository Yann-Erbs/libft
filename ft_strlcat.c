/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: entrainment <entrainment@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:05:46 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/18 14:10:13 by entrainment      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  len_src;
    size_t  len_dst;
    
    len_src = ft_strlen(src);
    len_dst = ft_strlen(dest);
    if (!size)
        return (len_src + len_dst);
    if (len_src <  len_dst - size)
        ft_strlcpy(dest + len_dst, src, len_src + 1);
    else
        ft_strlcpy(dst + len_dst, src, size - len_dst - 1);
    dst[size]
}

int main()
{
    return 0;
}
