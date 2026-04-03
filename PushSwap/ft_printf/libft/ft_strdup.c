/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:59:22 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 19:46:49 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*s2;
	size_t		i;

	i = 0;
	len = ft_strlen((char *)s);
	s2 = malloc(len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// int main()
// {
// 	char *s = "ciao";
// 	char *copia1 = strdup(s);
// 	char *copia = ft_strdup(s);
// 	printf("%s\n", s);
// 	printf("%s\n", copia);
// 	printf("%s\n", copia1);
// 	free(copia);
// }