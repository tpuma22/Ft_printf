/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:29:52 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 21:44:09 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
void ft_putstr_fd(char *s, int fd);
PARÁMETROS
	s: La string a enviar.
	fd: El file descriptor sobre el que escribir.
VALOR DEVUELTO: Nada
FUNCIONES AUTORIZADAS: write
DESCRIPCIÓN
Envía la string ’s’ al file descriptor especificado. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != 0)
		write (fd, s, ft_strlen(s));
}

/* int	main(void)
{
	char	*a;
	int		fd;

	a = "Naranja";
	fd = 1;
	ft_putstr_fd(a, fd);
} */
