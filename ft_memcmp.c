/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:34:47 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/20 16:37:19 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char		*t1;
	unsigned const char		*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
    if (!s1 || !s2)
        return (0);
    while (n)
    {
        if (*t1 != *t2)
            return (*t1 - *t2);
        t1++;
        t2++;
        n--;
    }   
    return (0);
}