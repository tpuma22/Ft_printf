/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:53:20 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 22:35:31 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
void ft_putnbr_fd(int n, int fd);
PARÁMETROS
	n: El número que enviar.
	fd: El file descriptor sobre el que escribir.
VALOR DEVUELTO: Nada
FUNCIONES AUTORIZADAS: write
DESCRIPCIÓN
Envía el número ’n’ al file descriptor dado. */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * (-1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
		{
			ft_putchar_fd(n + '0', fd);
		}
	}
}

/* int	main(void)
{
	int	a;
	int	fd;

	a = 2147;
	fd = 1;
	ft_putnbr_fd(a, fd);
	return (0);
} */
