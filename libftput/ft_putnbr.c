/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:42:59 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/05 17:22:57 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftput.h"

ssize_t	ft_putnbr(int n)
{
	ssize_t	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putnbr(n / 10);
		if (count != -1)
			count += ft_putchar(-(n % 10) + '0');
	}
	else if (n < 0)
	{
		count += ft_putchar('-');
		if (count != -1)
			count += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		if (count != -1)
			count += ft_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n <= 9)
		count += ft_putchar(n + '0');
	return (count);
}
