/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_flg_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:33:57 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:17:08 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

int	ft_plus_flg(const char *s, va_list ap, int *v)
{
	const char	*str;
	int			tmp;

	if (*v < 2)
		*v = 2;
	str = s;
	while (str[*v - 2]
		&& (str[*v - 2] == '#' || str[*v - 2] == ' ' || str[*v - 2] == '+'))
		(*v)++;
	while (*s && (*s == '#' || *s == ' ' || *s == '+'))
	{
		if (*s == '#' && (str[*v - 2] == 'x' || str[*v - 2] == 'X'))
			return (ft_one_flg(s, str[*v - 2], ap, v));
		s++;
	}
	if (*s == 'd' || *s == 'i')
	{
		tmp = va_arg(ap, int);
		if (tmp >= 0 && ft_putchar('+') == -1)
			return (-1);
		return ((tmp >= 0) + (int)ft_putnbr(tmp));
	}
	return (ft_conv(s, ap, NULL));
}
