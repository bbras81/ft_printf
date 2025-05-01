/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 23:24:43 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 10:32:46 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1] != '\n')
		{
			counter++;
			ft_getformat(str[counter], args);
		}
		else
		{
			ft_putchar(str[counter]);
		}
		counter++;
	}
	va_end(args);
	return (0);
}
