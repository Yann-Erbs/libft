/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:44:19 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/20 12:53:28 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (!s1 || !s2 || s1[i] != s2[i])
            return (s1 - s2);
            i++;
    }
    return (0);
}