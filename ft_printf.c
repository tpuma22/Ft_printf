/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:07:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 13:53:34 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdarg.h>

double	suma(int n, ...)
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

/* double	suma(int n, ...);

int	main(void)
{
	double	a;

	a = suma (5, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f);
	printf("%lf\n", a);
	return (0);
} */
