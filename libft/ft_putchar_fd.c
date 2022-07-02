/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:14:45 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 19:22:06 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
PROTOTIPO
void ft_putchar_fd(char c, int fd);
PARÁMETROS
	c: El carácter a enviar.
	fd: El file descriptor sobre el que escribir.
VALOR DEVUELTO: Nada
FUNCIONES AUTORIZADAS: write
DESCRIPCIÓN
Envía el carácter ’c’ al file descriptor especificado.
 */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	char	a;
	int		fd;

	a = 'z';
	fd = 1;
	ft_putchar_fd(a, fd);
}
 */
