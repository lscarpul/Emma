/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:16:50 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 12:56:37 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

// int main ()
// {
// 	char str[] = "salveeesalve";
// 	int i = 0;

// 	ft_bzero((void *)str, 7);
// 	while (i < 10)
// 	{
// 		if (str[i] == 0)
// 		{
// 			printf("index a zero = %d\n", i);
// 		}
// 		else
// 		{
// 			printf("index normali = %c\n", str[i]);
// 			i ++;
// 		}
// 	}
// }
