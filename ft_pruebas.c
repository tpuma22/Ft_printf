/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:07:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 21:29:35 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* double	suma(int n, ...)
{
	va_list	parametros;
	double	s;
	double	valor;
	int		i;

	va_start(parametros, n);
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
} */

int	main(void)
{
	char	str[20] = "Hola mundo";
	int		a;
	char	x;

	x = 'a';
	a = ft_strlen(str);
	printf("Mi función: %d\n", a);
	ft_putchar(x);
	puts("\n");
	ft_putchar(str[0]);
	/* 	b = suma (5, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f);
	printf("%lf\n", b); */
	return (0);
}
/* gcc -L -libft -I header.h */
