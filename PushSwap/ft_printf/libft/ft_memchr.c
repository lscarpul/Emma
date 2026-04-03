/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:23:36 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 15:43:37 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	cercato;
	size_t			i;

	p = (unsigned char *)s;
	cercato = (char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == (cercato))
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	char str[] = "ciaoooo";
// 	size_t n = 7;
// 	char *result = (char*) ft_memchr(str, 'o', n);
// 	if (result != NULL) {
// 		printf("Trovato 'o' alla posizione: %ld\n", result - str);
// 	} else {
// 		printf("Non trovato.\n");
// 	}
// 	return 0;
// }