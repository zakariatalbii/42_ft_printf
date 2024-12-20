/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:59:16 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/07 17:39:20 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libftput/libftput.h"
# include "bonus/libftprintf_bonus.h"

int	ft_printf(const char *str, ...);
int	ft_conv(const char *s, va_list ap, int *v);

#endif