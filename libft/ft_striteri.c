/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:19:20 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 19:17:46 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROTOTIPO
void ft_striteri(char *s, void (*f)(unsigned int, char*));
PARÁMETROS
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.
VALOR DEVUELTO Nada
FUNCIONES AUTORIZADAS: Ninguna
DESCRIPCIÓN
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el
índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que
podrá modificarse si es necesario. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* void	ft_lolo(unsigned int n, char *c)
{
	n++;
	c[0] += 1; // *c = c + 1;
	n--;
	printf("ft_lolo: i = %d -> %c\n", n, c[0]);
}

int	main(void)
{
	char	cad[10] = "abcdef";

	printf("The str is: %s\n", cad);
	ft_striteri(cad, ft_lolo);
	printf("The result is: %s\n", cad);
}
 */
