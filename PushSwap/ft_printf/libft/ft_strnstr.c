/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:08:35 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 16:47:01 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		a = 0;
		while (big[i + a] == little[a] && little[a] != '\0' && (i + a) < len)
		{
			a++;
		}
		if (little[a] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "salve a tutti";
// 	char to_find[] = "e";
//     size_t n = 3;
// 	printf("%s", ft_strnstr(str, to_find, n));
// }
