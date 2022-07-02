/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:02:09 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 16:38:23 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PARÁMETROS
	s1: La string que debe ser recortada.
	set: Los caracteres a eliminar de la string.
VALOR DEVUELTO
La string recortada. NULL si falla la reserva de memoria.
FUNCIONES AUTORIZADAS: malloc
DESCRIPCIÓN
Elimina todos los caracteres de la string ’set’ desde el principio y desde el
final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string
resultante se devuelve con una reserva de malloc(3) */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int	main(void)
{
	char	a[] = "CAROLINA";
	char	b[] = "C";
	char	*res;
	res = ft_strtrim(a, b);
	printf("%s", res);
	return (0);
}
 */
