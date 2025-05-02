/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:42:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 22:00:14 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char chr);
int		ft_getformat(char c, va_list args);
int		ft_putstr(char *str);
int		ft_putnbr(long nbr, char *base);
