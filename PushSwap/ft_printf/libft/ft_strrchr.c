/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:18:49 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 16:46:49 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	const char		*last;

	a = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == a)
		{
			last = s;
		}
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return ((char *)last);
}

//  int main ()
//  {
// 	char str[] = "ciao a tutti";
// 	char to_find = 'a';
// 	printf("%s", ft_strrchr(str, to_find));
// 	return (0);
//  }
