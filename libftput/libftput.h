/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftput.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatalbi <zatalbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:59:09 by zatalbi           #+#    #+#             */
/*   Updated: 2024/12/05 15:46:52 by zatalbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPUT_H
# define LIBFTPUT_H

# include <unistd.h>

ssize_t	ft_putchar(int c);
ssize_t	ft_putstr(char *s);
ssize_t	ft_putnbr(int n);
ssize_t	ft_putnbr_base(unsigned long n, unsigned long base, int v);

#endif