/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:41:34 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 22:00:14 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(long nbr, char *base)
{
	int	counter;
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	counter = 0;
	if (nbr >= base_len)
		counter += ft_putnbr(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
	return (counter);
}
