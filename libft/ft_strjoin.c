/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:16:44 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/08 12:03:44 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
char *ft_strjoin(char const *s1, char const *s2);
PARÁMETROS
	s1: La primera string.
	s2: La string a añadir a ’s1’.
VALOR DEVUELTO
La nueva string. NULL si falla la reserva de memoria.
FUNCIONES AUTORIZADAS: malloc
DESCRIPCIÓN
Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación
de ’s1’ y ’s2’. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}

/* {
	char	*str;
	size_t	s1_lengh;
	size_t	s2_lengh;

	s1_lengh = ft_strlen(s1);
	s2_lengh = ft_strlen(s2);
	str = (char *)malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str != 0)
	{
		ft_strlcpy(str, s1, s1_lengh + 1);
		ft_strlcat(str, s2, s1_lengh + s2_lengh + 1);
	}
	return (str);

} */
/* int	main(void)
{
	char	first[] = "Tania Carolina";
	char	second[] = " Puma";
	char	*cad;

	printf("The strings are: %s | %s\n", first, second);
	cad = ft_strjoin(first, second);
	printf("The result is: %s\n", cad);
	return (0);
} */
