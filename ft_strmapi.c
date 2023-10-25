/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:25:43 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/25 09:33:26 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;
	
	i = 0;
	s2 = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!s2)
		return (NULL);
	while(s[i])
	{
		s2[i] = f(i, s[i]);
		i++; 
	}
	return (s2);
}
