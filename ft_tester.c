/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:49:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/04 08:24:33 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	printf_ret;
	int	original_ret;

	original_ret = printf("%s\n", "");
	printf_ret = ft_printf("%s\n", "");
	printf("este e o retorno do ft_printf %d\n", printf_ret);
	printf("este e o retorno do printf %d\n", original_ret);
}
