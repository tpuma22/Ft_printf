/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PRUEBAS_ft_str_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:55:09 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/10 11:01:11 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h" */
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

/* int ft_str_print(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (ft_str_print("NULL"));
	while (str[i])
	{
		count += write(1, &str[i], 1);
		++i;
	}
	return (count);
} */

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_put_unsignbr_base(unsigned long int unsignbr, char	*base)
{
	unsigned long int	lenbase;
	int					counter;

	counter = 0;
	lenbase = ft_strlen(base);
	if (unsignbr >= lenbase)
		counter += ft_put_unsignbr_base(unsignbr / lenbase, base);
	counter += ft_putchar(base[unsignbr % lenbase]);
	return (counter);
}

int main()
{
	// char				*cad = "0123456789abcdef";
	unsigned long int 	nbr;

	// cad = ;
	nbr = 77;
	ft_put_unsignbr_base(nbr, "0123456789abcdef");
	// printf("xxxxxEl counter es: (%d)xxxxxx", ft_put_unsignbr_base(nbr, "0123456789"));
/* 	printf("%c", ft_print_hex(nbr, cad)); */
	return (0);
}

/* int	ft_print_char(int c)
{
	int	caracter;

	caracter = 0;
	caracter += write(1, &c, 1);
	return (caracter);
}

int	ft_print_hex(unsigned long int num, char c)
{
	int		hex;

	hex = 0;
	if (c == 'x' || c == 'p')
	{
		if (num >= 16)
			hex = ft_print_hex(num / 16, c);
		hex += ft_print_char("0123456789abcdef"[num % 16]);
	}
	else if (c == 'X')
	{
		if (num >= 16)
			hex += ft_print_hex(num / 16, c);
		hex += ft_print_char("0123456789ABCDEF"[num % 16]);
	}
	return (hex);
} */


