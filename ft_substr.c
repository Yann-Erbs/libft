/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 07:20:57 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/24 07:40:55 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*s2;
	int	compteur;

	s2 = ft_calloc(len + 1, sizeof(char *));
	if (!s2)
		return (NULL);
	compteur = 0;
	while(compteur < len)
	{
		s2[compteur] = s[start];
		compteur++;
		start++;
	}
	return (s2);
}

