/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.format                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:07:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/03 12:02:33 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter_format(va_list param, char format)
{
	int			count;
	size_t		number;
	char		*chain;

	count = 0;
	if (format == 'c')
		ft_putchar_fd((va_arg(param, int)), 1);
	else if (format == '%')
	{
		count += 1;
		ft_putchar_fd('%', 1);
	}
	 	else if (format == 's')
	{
		chain = va_arg(param, char *);
		count += ft_strlen(chain);
		ft_putstr_fd(chain, 1);
	/* 	ft_str_print((va_arg(param, char *))); */
	}
 	else if (format == 'd' || format == 'i')
	{
		number = va_arg(param, int);
	/* 	count += */
		ft_putnbr_fd(number, 1);
		/* ft_strlen(number); */

		/* ft_nbr_len(numero); */
	}
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
			numb += ft_putchar(*str);
		}
		str++;
	}
/* 	while (str[i])
	{
		if (str[i] == '%')
		{
 			numb += ft_filter_format(param, (str[i] + 1));
			i += 2;
		}
		else
		{
			numb += write(1, &str[i], 1);
		}
		i++;
	} */
	va_end(param);
	return (numb);
}

int	main(void)
{
 	char	*cad = "Tania";
	char			l;
	float			f;
	int				i;
	unsigned int	u;
	int				number_org;
	int				number_mía;

	l = 'z';
	f = 3.14;
	i = -2147483648;
	u = 429496729;
	number_org = 0;
	number_mía = 0;
	number_org = printf("org: %c | %% | %s | %d\n", l, cad, i);
	number_mía = ft_printf("mía: %c | %% | %s | %d\n", l, cad, i);
	printf("Función org: %d\nFunción mía: %d", number_org, number_mía);
/* 	texto = "inicio %format %s %d final";
	x = 48;
	a = ft_printf(texto, x, "hola95", 453);
	write(1, "\n", 1);
	b = printf(texto, x, "hola", 453);
	printf("\nft_printf: %d\nprintf: %d", a, b); */
	return (0);
}
