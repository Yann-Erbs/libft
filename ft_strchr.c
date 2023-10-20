/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:31:29 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/20 12:43:03 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *) &s[i]);
        i++;
    }
    return (NULL);
}
