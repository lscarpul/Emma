/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:05:07 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 17:02:16 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	in_set(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	i;
	char	*str;

	a = 0;
	b = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[b])
		b++;
	while (s1[a] && in_set(s1[a], set))
		a++;
	while (b > a && in_set(s1[b - 1], set))
		b--;
	str = malloc(b - a + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < b - a)
		str[i] = s1[a + i];
	str[b - a] = '\0';
	return (str);
}

// int main()
// {
// 	char s1[] = "somfjgso";
// 	char set[] = "som";
// 	char *parola;
// 	parola = ft_strtrim(s1, set);
// 	printf("%s\n", parola);
// 	free(parola);
// 	return 0;
// }