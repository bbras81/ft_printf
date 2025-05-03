/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:46:59 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/02 16:23:36 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar_fd(str[counter], 1);
		counter++;
	}
	return (counter);
}
