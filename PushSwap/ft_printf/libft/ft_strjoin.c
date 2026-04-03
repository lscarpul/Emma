/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:28:53 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 18:35:51 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	size_t	len1;
	size_t	len2;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc ((len1 + len2) + 1);
	i = 0;
	a = 0;
	if (!s3)
		return (NULL);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (a < len2)
	{
		s3[i + a] = s2[a];
		a++;
	}
	s3[i + a] = s2[a];
	return (s3);
}

// int main()
// {	
// 	char s1[10] = "ciao ";
// 	char s2[10] = "a tutti";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }