/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:53:38 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/05 17:26:29 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftput.h"

ssize_t	ft_putnbr_base(unsigned long n, unsigned long base, int v)
{
	ssize_t	count;
	char	*s;

	s = "0123456789abcdef";
	count = 0;
	if (n >= base)
	{
		count += ft_putnbr_base(n / base, base, v);
		if (count != -1)
		{
			if (v && n % base > 9)
				count += ft_putchar(s[n % base] - 32);
			else
				count += ft_putchar(s[n % base]);
		}
	}
	else if (n >= 0 && n < base)
	{
		if (v && n > 9)
			count += ft_putchar(s[n] - 32);
		else
			count += ft_putchar(s[n]);
	}
	return (count);
}
