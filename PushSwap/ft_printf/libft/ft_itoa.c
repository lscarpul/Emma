/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:52:05 by enucci            #+#    #+#             */
/*   Updated: 2025/12/20 16:21:42 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	write_number(char *s, long n, int len, int neg)
{
	int	i;
	int	digit;

	i = len + neg - 1;
	if (n == 0)
	{
		s[0] = '0';
		return ;
	}
	while (n)
	{
		digit = (int)(n % 10);
		s[i] = '0' + digit;
		i--;
		n /= 10;
	}
	if (neg)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	long	num;
	long	abs_num;
	int		neg;
	int		len;
	char	*s;

	num = n;
	neg = 0;
	if (num < 0)
		neg = 1;
	len = num_len(num);
	s = malloc((size_t)(len + neg + 1));
	if (!s)
		return (NULL);
	s[len + neg] = '\0';
	if (num < 0)
		abs_num = -num;
	else
		abs_num = num;
	write_number(s, abs_num, len, neg);
	return (s);
}
