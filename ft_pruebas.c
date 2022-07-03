/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:07:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/03 16:07:58 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
double	suma(int n, ...)
{
	va_list	parametros;
	va_start(parametros, n);
	//Procesos
	double	s;
	double	valor;
	int		i;

	i = 0;
	s = 0.0;
	while (i < n)
	{
		valor = va_arg(parametros, double);
		s += valor;
		i++;
	}
	va_end(parametros);
	return (s);
}

size_t	ft_strlen(const char *s)

{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[20] = "Hola mundo";
/* 	int		a; */
	int		b;
	char	x;
	int		number;

	x = 'a';
	number = 0;
/* 	a = ft_strlen(str);
	printf("La cadena mide: %d\n", a); */
	number = printf("La cadena dice: %s\n", str);
	printf("%d\n", number);
	printf("El resultado de una suma decimal es: %f\n", suma(3, 1.0, 3.0, 4.0));
	ft_putchar(x);
	puts("\n");
	ft_putchar(str[0]);
	puts("\n");
	b = suma (5, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f);
	printf("%d\n", b);
	return (0);
}
//-------------------------------
/* gcc -L -libft -I header.h */
//-------------------------------
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
