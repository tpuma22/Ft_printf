/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:34:34 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/31 12:32:06 by tpuma            ###   ########.fr       */
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
		return (ft_put_unsigned_nbr_base(va_arg(param, unsigned long int),
				"0123456789abcdef"));
	else if (format == 'X')
		return (ft_put_unsigned_nbr_base(va_arg(param, unsigned long int),
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

/* int	main(void)
{
	char				*cad = "Tania";
	char				l;
	float				f;
	int					i;
	int					d;
	unsigned int		u;
	unsigned long int	x;
	unsigned long int	X;
	int				number_org;
	int				number_mia;

	l = 'z';
	f = 3.14;
	i = -2147483648;
	d = 45;
	u = 65535;
	x = 255;
	X = 255;
	number_org = 0;
	number_mia = 0;
	number_org = printf("1: %c | %s | %p | %d | %i | %u | %lx | %lX | %% \n", l, cad, cad, d, i, u, x, X);
	number_mia = ft_printf("2: %c | %s | %p | %d | %i | %u | %x | %X | %% \n", l, cad, cad, d, i, u, x ,X);
	printf("Función org: %d\nFunción mía: %d\n", number_org, number_mia);
	printf("PRUEBA - el puntero es: %p | el numero es: %d\n", cad, (int)cad);
	return (0);
} */
