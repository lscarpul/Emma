/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:56:43 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 23:24:49 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	totale;
	void	*puntatore;

	totale = num * size;
	puntatore = malloc(totale);
	if (puntatore == NULL)
		return (NULL);
	ft_memset(puntatore, 0, totale);
	return (puntatore);
}

// int	main()
// {
// 	size_t n = 7;
// 	int *arr;
// 	arr = (int*)ft_calloc(n, sizeof(int));
// 	for(size_t i = 0; i < n; i++)
// 	{
// 		printf("%d", arr[i]);
// 	}
// }
