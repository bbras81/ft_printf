/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:49:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/02 13:31:21 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	printf_ret;
	int	original_ret;

	original_ret = printf("%s\n", "Ola Mundo");
	printf_ret = ft_printf("%s\n", "Ola Mundo");
	printf("este e o retorno do ft_printf %d\n", printf_ret);
	printf("este e o retorno do printf %d\n", original_ret);
}
