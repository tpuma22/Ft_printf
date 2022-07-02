/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:59:31 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/08 12:13:14 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
PARÁMETROS
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.
VALOR DEVUELTO
La string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria.
FUNCIONES AUTORIZADAS: malloc
DESCRICPCIÓN
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva
string con el resultado del uso sucesivo de ’f’ */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(i, ((char *)s)[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*
char	ft_lolo(unsigned int i, char str)
{
	printf("ft_lolo: i = %d -> %c\n", i, str);
	return (str - 32);
}

int	main()
{
	char	str[] = "hola_";
	char	*result;

	printf("The str is: %s\n", str);
	result = ft_strmapi(str, ft_lolo);
	printf("The result is: %s\n", result);
	return (0);
}
 */
