/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 23:24:43 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 10:07:00 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	va_start(args, str);
	va_end(args);
	if (!str)
		return (0);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1] != '\n')
		{
			continue ;
		}
		else
		{
			ft_putchar(str[counter]);
		}
		counter++;
	}
	return (0);
}
