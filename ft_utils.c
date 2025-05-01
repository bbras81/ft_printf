/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:31:13 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 21:39:39 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_getformat(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		counter = 1;
	}
	else if (c == 's')
	{
		counter += ft_putstr(va_arg(args, char *));
	}
	return (counter);
}
