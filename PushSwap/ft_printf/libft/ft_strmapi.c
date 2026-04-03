/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:06:13 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 18:35:51 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}

// static char	mapper(unsigned int i, char c)
// {
// 	if ((i % 2) == 0 && c >= 'a' && c <= 'z')
// 		return ((char)(c - ('a' - 'A')));
// 	return (c);
// }

// int main(void)
// {
// 	char const *s = "ciao a tutti hola";
// 	char *res = ft_strmapi(s, mapper);
// 	printf("%s\n", res);
// 	free(res);
// }