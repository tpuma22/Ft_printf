/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:45:40 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 21:51:26 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
void ft_putendl_fd(char *s, int fd);
PARÁMETROS
	s: La string a enviar.
	fd: El file descriptor sobre el que escribir.
VALOR DEVUELTO: Nada
FUNCIONES AUTORIZADAS: write
DESCRIPCIÓN
Envía la string ’s’ al file descriptor dado, seguido de un salto de línea. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0)
	{
		write (fd, s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}

/* int	main(void)
{
	char	*a;
	int		fd;

	a = "Naranja";
	fd = 1;
	ft_putendl_fd(a, fd);
} */
