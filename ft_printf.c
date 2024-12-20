/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:01:12 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 17:38:59 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		v;

	va_start(ap, str);
	count = 0;
	while (*str)
	{
		v = 1;
		if (*str == '%')
			count += ft_conv(str + 1, ap, &v);
		else
			count += (int)ft_putchar(*str);
		if (count == -1)
			return (-1);
		str += v;
	}
	va_end(ap);
	return (count);
}
