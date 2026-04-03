/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:55:35 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 18:36:14 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[s] != '\0')
		s++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (s);
}

// int main()
// {
// 	size_t n;
// 	n = 3;
// 	char dest[7];
// 	char src[] = "salvee";
// 	printf("%zu\n", ft_strlcpy(dest, src, n));
// 	printf("%s" , dest);
// }
