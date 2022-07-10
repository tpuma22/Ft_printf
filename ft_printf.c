/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:34:34 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/10 11:28:43 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter_format(va_list param, char format)
{
	int			count;
	size_t		number;
	char		*chain;
	char		*chain_nb;

	count = 0;
	if (format == 'c')
		ft_putchar_fd((va_arg(param, int)), 1);
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 's')
	{
		chain = va_arg(param, char *);
		count += ft_strlen(chain);
		ft_putstr_fd(chain, 1);
	}
	else if (format == 'd' || format == 'i')
	{
		number = va_arg(param, int);
		ft_putnbr_fd(number, 1);
		chain_nb = ft_itoa(number);
		count += ft_strlen(chain_nb);
	}
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(param, long int));
	return (count);
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
		{
			numb += write(1, &str[i], 1);
		}
		str++;
	}
	va_end(param);
	return (numb);
}


/*
 int	main(void)
{
 	char	*cad = "Tania";
	char			l;
	float			f;
	int				i;
	int				d;
	unsigned int	u;
	int				number_org;
	int				number_mia;

	l = 'z';
	f = 3.14;
	i = -2147483648;
	d = 45;
	u = 4294967295;
	number_org = 0;
	number_mia = 0;
	number_org = printf("Org: %c | %% | %s | %i | %d | %u\n", l, cad, i, d, u);
	number_mia = ft_printf("Mía: %c | %% | %s | %i | %d | %u\n", l, cad, i, d, u);
	printf("Función org: %d\nFunción mía: %d\n", number_org, number_mia);
	printf("PRUEBA - el puntero es: %p | el numero es: %d\n", cad, (int)cad);
	return (0);
} */
