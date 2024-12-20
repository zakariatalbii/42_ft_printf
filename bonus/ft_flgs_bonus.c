/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flgs_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:24:40 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:16:44 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

int	ft_flgs(const char *s, va_list ap, int *v)
{
	if (*s == '#')
		return (ft_hash_flg(s, ap, v));
	else if (*s == '+')
		return (ft_plus_flg(s, ap, v));
	return (ft_space_flg(s, ap, v));
}
