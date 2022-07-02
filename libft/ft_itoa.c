/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:42:28 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/08 18:24:17 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
PROTOTIPO
char *ft_itoa(int digit);
PARÁMETROS
	digit: el entero i convertir.
VALOR DEVUELTO
La string que represente el número. NULL si falla la reserva de memoria.
FUNCIONES AUTORIZADAS: malloc
DESCRIPCIÓN
Utilizando malloc(3), genera una string que represente el valor entero recibido
como argumento. Los números negativos tienen que gestionarse. */

#include "libft.h"

static int	ft_length(int nb)
{
	int	i;

	i = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	if (nb < 0)
	{
		nb = nb + 1;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str_number;
	int		i;
	int		str_lengh;
	long	digit;

	digit = n;
	i = 0;
	str_lengh = ft_length(digit);
	str_number = (char *)malloc(sizeof(char) * (str_lengh + 1));
	if (!(str_number))
		return (NULL);
	str_number[str_lengh] = '\0';
	if (digit < 0)
	{
		str_number[i] = '-';
		digit *= -1;
	}
	if (digit == 0)
		str_number[0] = '0';
	while (digit > 0)
	{
		str_number[str_lengh - i++ - 1] = (digit % 10) + '0';
		digit = digit / 10;
	}
	return (str_number);
}

/* int	main(void)
{
	int		num;
	int		i;
	char	*output;

	num = -12345;
	i = 0;
	output = ft_itoa(num);
	printf("El valor en la cadena es: %s\n", output);
	while (output[i])
	{
		write(1, &output[i], 1);
		i++;
	}
	free(output);
	return (0);
} */

/* int	main(void)
{
	int		num;

	num = 12345;
	ft_length(num);
	printf("El valor de la cadena es: %d\digit", num);
	return (0);
} */
