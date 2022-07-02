/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:46:25 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/06 21:52:43 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
LIBRARY
#include <strings.h>
PROTOTYPE
void bzero(void *s, size_t n);
DESCRIPTION
The bzero() function writes n zeroes bytes to the string s. If n is zero,
bzero() does nothing.
PARAMETERS
		1. The destiny string / object in which to write zeroes.
		2. The number of bytes to fill.
RETURN VALUES
- */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	size_t	len;
	char	cadena[11] = "Hola mundo";

	len = 2;
	ft_bzero(cadena, len);
	write (1, &cadena, 11);
	write (1, "\n", 1);
	printf("Mi función: %s\n", cadena);
	bzero(cadena, len);
	write (1, &cadena, 11);
	write (1, "\n", 1);
	printf("La original: %s\n", cadena);
	return (0);
} */
