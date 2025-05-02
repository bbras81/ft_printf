/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:31:13 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/02 13:14:27 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	get_sign(va_list args)
{
	long	nbr;

	nbr = va_arg(args, int) * -1;
	return (nbr);
}

int	ft_getformat(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		counter = 1;
	}
	else if (c == 's')
		counter += ft_putstr(va_arg(args, char *));
	/*else if (c == 'd' || c == 'i')
	{
		if (va_arg(args, int) < 0)
		{
			counter += ft_putnbr(get_sign(args), "0123456789");
		}
		counter += ft_putnbr(va_arg(args, int), "0123456789");
	}*/
	return (counter);
}
