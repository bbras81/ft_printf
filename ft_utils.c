/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:31:13 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/01 10:32:47 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_getformat(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == '%')
		ft_putchar(c);
	return (counter);
}
