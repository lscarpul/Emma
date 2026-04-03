/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 23:03:26 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 17:09:22 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char **tab, size_t i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	ctr;
	int	trgr;

	ctr = 0;
	trgr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && trgr == 0)
		{
			trgr = 1;
			ctr++;
		}
		else if (s[i] == c)
		{
			trgr = 0;
		}
		i++;
	}
	return (ctr);
}

static char	**fill(char **tab, const char *s, char c)
{
	int		i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[j] = ft_substr(s, start, i - start);
			if (!tab[j])
				return (free_all(tab, j));
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	i = word_count(s, c);
	tab = malloc(sizeof(char *) * (i + 1));
	if (!tab)
		return (NULL);
	return (fill(tab, s, c));
}
