/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:30:04 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/07 14:43:45 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter_format(va_list param, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(param, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(param, char *)));
	else if (format == 'p')
		return (write(1, "0x", 2)
			+ ft_put_unsigned_nbr_base(va_arg(param, unsigned long int),
				"0123456789abcdef"));
	else if (format == 'd' || format == 'i')
		return (ft_print_number(va_arg(param, int)));
	else if (format == 'u')
		return (ft_put_unsigned_nbr_base(va_arg(param, unsigned int),
				"0123456789"));
	else if (format == 'x')
		return (ft_put_unsigned_nbr_base(va_arg(param, unsigned int),
				"0123456789abcdef"));
	else if (format == 'X')
		return (ft_put_unsigned_nbr_base(va_arg(param, unsigned int),
				"0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (ft_putchar(format));
}

int	ft_printf(char const *str, ...)
{
	va_list	param;
	int		numb;
	int		i;

	i = 0;
	numb = 0;
	va_start(param, str);
	while (*str)
	{
		if (*str == '%')
			numb += ft_filter_format(param, *++str);
		else
			numb += write(1, &str[i], 1);
		str++;
	}
	va_end(param);
	return (numb);
}
