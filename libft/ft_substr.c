/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:04:55 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 15:01:27 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
char *ft_substr(char const *s, unsigned int start,
size_t len);
PARÁMETROS
	s: La string desde la que crear la substring.
	start: El índice del caracter en ’s’ desde el que empezar la substring.
	len: La longitud máxima de la substring.
VALOR DEVUELTO
La substring resultante. NULL si falla la reserva de memoria.
FUNCIONES AUTORIZDAS: malloc
DESCRIPCIÓN
Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring
empieza desde el índice ’start’ y tiene una longitud máxima ’len’.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*second;

	if (start >= ft_strlen(s) || len <= 0)
	{
		second = (char *)malloc(1);
		*second = '\0';
		return (second);
	}
	if (len > ft_strlen(s) && start < ft_strlen(s))
		len = ft_strlen(s) - start;
	second = (char *)malloc(sizeof(char) * (len + 1));
	if (s == 0 || second == 0)
		return (NULL);
	ft_strlcpy(second, &s[start], len + 1);
	return (second);
}
/*
int	main(void)
{
	char	*cad = "tripouille";
	int		first;
	size_t	longitud;

	first = 3;
	longitud = 7;
	printf("%s\n", ft_substr(cad, first, longitud));
	return (0);
} */
/*
//Formas de reservar memoria
malloc(sizeof(*s) * (len + 1));
malloc(sizeof(char) * (len + 1));
malloc(len + 1); */
