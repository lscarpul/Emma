/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:36:39 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 15:44:04 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				i;

	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return ((int)st1[i] - (int)st2[i]);
		i++;
	}
	return (0);
}

//  int main(void)
//  {
//    const char s1[] = "abcdef";
// 	 const char s2[] = "abcdeg";
// 	 const char s3[] = "abcdef";
// 	size_t n = 6;
// 	 printf("compare s1 vs s2 (n=%zu): ft_memcmp=%d, memcmp=%d\n",
// 		 n, ft_memcmp(s1, s2, n), memcmp(s1, s2, n));
// 	 printf("compare s1 vs s3 (n=%zu): ft_memcmp=%d, memcmp=%d\n",
// 		 n, ft_memcmp(s1, s3, n), memcmp(s1, s3, n));
// 	return (0);
//  }