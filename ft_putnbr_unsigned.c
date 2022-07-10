/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:03:23 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/09 21:42:02 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(long int n)
{
	int	counter;

	counter = 0;
	if (n < 0 || n > UINT_MAX)
		return (0);
	if (n > 9)
	{
		counter += ft_putnbr_unsigned(n / 10);
		counter += ft_putchar(n % 10 + '0');
	}
	else
		counter += ft_putchar(n + '0');
	return (counter);
}

/* int	main(void)
{
	long int b;

	b = 13;
	printf("\ncounter: %d\n", ft_putnbr_unsigned(b));
	return (0);
}
 */
