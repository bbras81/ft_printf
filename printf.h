/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:42:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/02 13:14:09 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
/*void	ft_putchar(char chr);
int	ft_getformat(char c, va_list args);
int	ft_putstr(char *str);
int	ft_putnbr(unsigned long nbr, char *base);*/

#endif
