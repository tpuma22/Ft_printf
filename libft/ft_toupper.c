/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:22:55 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:15:03 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/* int	main(void)
{
	int	a;

	a = 127;
	printf("variable: %c\n", a);
	printf("Mi función: %d - %c\n", ft_toupper(a), ft_toupper(a));
	printf("La original: %d - %c\n", toupper(a), toupper(a));
	return (0);
} */
