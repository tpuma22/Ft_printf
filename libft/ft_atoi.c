/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:22:12 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 12:01:46 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <stdlib.h>
PROTOTYPE
int	atoi(const char *str);
DESCRIPTION
The atoi() function converts the initial portion of the string pointed to by str
to int representation. Searches for a number in a string of characters,
only searches until the next character is not a number.
PARAMETERS
	1. The string to convert to integer.
RETURN VALUES
This function returns its input, as an int. If in the first position there is
“\f”, “\t”, “ “, “\n”, “\r”, “\v” it is ignored, if after there is a negative
sign the result will give negative with sign. If there is no number after the
sign, it returns zero as the result.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	int		total;

	i = 0;
	total = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		total = ((total * 10) + (str[i] - '0'));
		i++;
	}
	total *= sign;
	return (total);
}

/* int	main(void)
{
	char	a[] = "	--123";
	printf("%s\n", a);
	ft_atoi(a);
	printf("mi función es: %d\n", ft_atoi(a));
	printf("la original es: %d\n", atoi(a));
	return (0);
}
 */
