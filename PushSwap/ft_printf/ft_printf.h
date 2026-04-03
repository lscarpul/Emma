/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enucci <enucci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:49:09 by enucci            #+#    #+#             */
/*   Updated: 2026/01/15 17:23:59 by enucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	handle_conversion(char c, va_list args);
int	ft_putunsigned(unsigned int n);
int	ft_puthex(unsigned int n, char format);
int	ft_puthex_ptr(unsigned long n);
int	ft_putpointer(void *ptr);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);

#endif