/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:35:15 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/05 16:39:49 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftput.h"

ssize_t	ft_putstr(char *s)
{
	ssize_t	count;

	if (s == NULL)
		return (ft_putstr("(null)"));
	count = 0;
	while (*s)
	{
		count += ft_putchar(*s++);
		if (count == -1)
			return (-1);
	}
	return (count);
}
