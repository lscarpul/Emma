/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:45:31 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 17:07:16 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	d;
	size_t	i;
	size_t	s;

	d = 0;
	s = 0;
	i = 0;
	while (src[s])
		s++;
	if (size == 0)
		return (s);
	while (dest[d] && d < size)
		d++;
	if (d >= size)
		return (size + s);
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
/*int main()
{
	char dest[] = "ciao";
	char src[] = "salvee";
	int n = 10000;
	printf("%d\n", ft_strlcat(dest, src, n));
	printf("%s" , dest);
}*/
