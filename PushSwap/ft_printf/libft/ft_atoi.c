/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:44:11 by lscarpul          #+#    #+#             */
/*   Updated: 2025/12/20 17:04:11 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	sign;
	size_t	result;
	size_t	temp;

	i = 0;
	temp = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
		temp++;
	}
	if (temp > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main()
// {
// 	printf("%d\n", ft_atoi("  -1234abc"));
// 	printf("%d\n", ft_atoi("  -+42"));
// 	printf("%d\n", ft_atoi("   +20"));
// 	printf("%d\n", ft_atoi("   --987654321"));
// 	printf("%d\n", atoi("  -1234abc"));
// 	printf("%d\n", atoi("  -+42"));
// 	printf("%d\n", atoi("   +20"));
// 	printf("%d\n", atoi("   --987654321"));
// 	return (0);
// }
