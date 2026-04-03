/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:42:30 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 15:44:37 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return ((void *)dest);
}

// int main() {
// 	char origine[] = "Ciao!";
// 	char destinazione[50];

// 	ft_memcpy(destinazione, origine, 6);
// 	printf("Destinazione: %s\n", destinazione);

// }   
