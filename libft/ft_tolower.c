/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:46:00 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:15:23 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/* int	main(void)
{
	int	a;

	a = 65;
	printf("variable: %c\n", a);
	printf("Mi función: %d - %c\n", ft_tolower(a), ft_tolower(a));
	printf("La original: %d - %c\n", tolower(a), tolower(a));
	return (0);
} */
