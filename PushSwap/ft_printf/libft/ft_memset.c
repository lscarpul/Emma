/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:00:36 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 17:25:31 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;

	a = p;
	b = c;
	while (n != 0)
	{
		*a = b;
		a++;
		n--;
	}
	return (p);
}

// int main(void)
// {
// 	char str[20] = "Hello, world!";
// 	printf("Prima:  %s\n", str);
// 	ft_memset(str+2, '*', 5);  
// 	printf("Dopo:   %s\n", str);
// 	return 0;
// }
