/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:09:40 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 16:48:09 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	to_uppercase(unsigned int i, char *c)
{
	if ((i % 2) == 0 && *c >= 'a' && *c <= 'z')
	{
		*c = *c - 'a' + 'A';
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
// 	char str[] = "hello world!";
// 	ft_striteri(str, to_uppercase);
// 	printf("%s\n", str);
// }