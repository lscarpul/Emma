/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 21:12:29 by enucci            #+#    #+#             */
/*   Updated: 2026/03/12 15:04:59 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_args(char *str)
{
	return (ft_split(str, ' '));
}

static int	count_words(char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != ' ')
			i++;
	}
	return (count);
}

static char	*get_word(char *s, int *i)
{
	int		start;
	int		len;
	char	*word;

	while (s[*i] == ' ')
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && s[*i] != ' ')
	{
		len++;
		(*i)++;
	}
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

static char	**free_all(char **result, int j)
{
	while (j--)
		free(result[j]);
	free(result);
	return (NULL);
}

char	**split(char *s)
{
	char	**result;
	int		words;
	int		i;
	int		j;

	words = count_words(s);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		result[j] = get_word(s, &i);
		if (!result[j])
			return (free_all(result, j));
		j++;
	}
	result[j] = NULL;
	return (result);
}
