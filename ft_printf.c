/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:07:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 22:48:53 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter_format(va_list ap, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	param;
	int		count;

	count = 0;
	va_start(param, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
 			count += ft_filter_format(param, *++str);
		}
		else
		{
			count += ft_putchar(*str);
		}
		str++;
	}
	va_end(param);
	return (count);
}

/* int	main(void)
{
	char	*texto;
	int		a;
	int		b;
	int		x;

	printf("Esta es la original: %%\n");
	ft_printf("Esta es mi función: %%\n");
	texto = "inicio %c %s %d final";
	x = 48;
	a = ft_printf(texto, x, "hola95", 453);
	write(1, "\n", 1);
	b = printf(texto, x, "hola", 453);
	printf("\nft_printf: %d\nprintf: %d", a, b);

	return (0);
} */
