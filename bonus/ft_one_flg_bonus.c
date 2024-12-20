/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_flg_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:55:55 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:17:02 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

int	ft_one_flg(const char *s, char c, va_list ap, int *v)
{
	if (*s == '#' && (c == 'x' || c == 'X'))
		return (ft_hash_flg(s, ap, v));
	else if (*s == '+' && (c == 'd' || c == 'i'))
		return (ft_plus_flg(s, ap, v));
	return (ft_space_flg(s, ap, v));
}
