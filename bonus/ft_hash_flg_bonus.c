/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_flg_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:26:53 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:16:51 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

int	ft_hash_flg(const char *s, va_list ap, int *v)
{
	const char		*str;
	unsigned int	tmp;

	if (*v < 2)
		*v = 2;
	str = s;
	while (str[*v - 2]
		&& (str[*v - 2] == '#' || str[*v - 2] == ' ' || str[*v - 2] == '+'))
		(*v)++;
	while (*s && (*s == '#' || *s == ' ' || *s == '+'))
	{
		if ((*s == '+' || *s == ' ')
			&& (str[*v - 2] == 'd' || str[*v - 2] == 'i'))
			return (ft_one_flg(s, str[*v - 2], ap, v));
		s++;
	}
	if (*s == 'x' || *s == 'X')
	{
		tmp = va_arg(ap, unsigned);
		if ((tmp && *s == 'x' && ft_putstr("0x") == -1)
			|| (tmp && *s == 'X' && ft_putstr("0X") == -1))
			return (-1);
		return (2 * (tmp != 0) + (int)ft_putnbr_base(tmp, 16, (*s == 'X')));
	}
	return (ft_conv(s, ap, NULL));
}
