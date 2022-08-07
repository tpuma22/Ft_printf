/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:20:22 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/07 14:28:24 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number)
{
	int	length;

	length = 0;
	if (number == -2147483648)
		return (write(1, "-2147483648", 11));
	else
	{
		if (number < 0)
		{
			length += ft_putchar('-');
			number *= (-1);
		}
		if (number > 9)
		{
			length += ft_print_number(number / 10);
			length += ft_putchar(number % 10 + '0');
		}
		else
			length += ft_putchar(number + '0');
	}
	return (length);
}
