/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:53:12 by enucci            #+#    #+#             */
/*   Updated: 2026/01/17 18:02:20 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_puthex_ptr(addr);
	return (count);
}
