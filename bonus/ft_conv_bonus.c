/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:09:22 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:16:33 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

int	ft_conv(const char *s, va_list ap, int *v)
{
	if (v)
		*v = 2;
	if (*s == 'c')
		return ((int)ft_putchar(va_arg(ap, int)));
	else if (*s == 's')
		return ((int)ft_putstr(va_arg(ap, char *)));
	else if (*s == 'p')
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		return (2
			+ (int)ft_putnbr_base((unsigned long)va_arg(ap, void *), 16, 0));
	}
	else if (*s == 'd' || *s == 'i')
		return ((int)ft_putnbr(va_arg(ap, int)));
	else if (*s == 'u')
		return ((int)ft_putnbr_base(va_arg(ap, unsigned), 10, 0));
	else if (*s == 'x' || *s == 'X')
		return ((int)ft_putnbr_base(va_arg(ap, unsigned), 16, (*s == 'X')));
	else if (*s == '#' || *s == ' ' || *s == '+')
		return (ft_flgs(s, ap, v));
	return ((int)ft_putchar(*s));
}
