/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:57:50 by yerbs             #+#    #+#             */
/*   Updated: 2023/10/25 13:12:46 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	compter_les_mots(char const *s, char c)
{
	int	i;
	int	compteur;

	compteur = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if (s[i])
			compteur++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (compteur);
}

void	free_chaine(char **chaine_finale)
{
	int	i;

	i = 0;
	while(chaine_finale[i])
		free(chaine_finale[i++]);
	free(chaine_finale);
}

int	copier_les_mots(char const *chaine, char **chaine_finale, int longueur)
{
	char	**debut_chaine;
	
	debut_chaine = chaine_finale;
	*chaine_finale = ft_substr(chaine, 0, longueur);
	if (!*chaine_finale)
	{
		free_chaine(debut_chaine);
		return (0);
	}
	return (1);
}

char	**separer_les_mots(char const *chaine, char separateur)
{
	char	**result;
	int	mots;
	int	i;
	int	j;
	int	k;
	
	i  = 0;
	k = 0;
	mots = compter_les_mots(chaine, separateur);
	result = ft_calloc(mots + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while(chaine[i])
	{
		while(chaine[i] && chaine[i] == separateur)
			i++;
		j = i;
		while(chaine[i] && chaine[i] != separateur)
			i++;
		if (i != j && !copier_les_mots(chaine + j, &result[k++], (i - j)))
		{
			free_chaine(result);
			return (NULL);
		}
	}
	return (result);
}

char **ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (separer_les_mots((char *)s, c));
}
/*
int main()
{
	char *s = "      split       this for   me  !       ";
	char **result = ft_split(s, ' ');
	int i = 0;

	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	printf("oui");
}*/
