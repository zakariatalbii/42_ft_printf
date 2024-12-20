/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:13:01 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 14:15:37 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_BONUS_H
# define LIBFTPRINTF_BONUS_H

# include <stdarg.h>
# include "../libftput/libftput.h"

int	ft_printf(const char *str, ...);
int	ft_conv(const char *s, va_list ap, int *v);
int	ft_flgs(const char *s, va_list ap, int *v);
int	ft_hash_flg(const char *s, va_list ap, int *v);
int	ft_plus_flg(const char *s, va_list ap, int *v);
int	ft_space_flg(const char *s, va_list ap, int *v);
int	ft_one_flg(const char *s, char c, va_list ap, int *v);

#endif