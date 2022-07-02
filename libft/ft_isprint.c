/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:35:54 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:14:10 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	a;

	a = 122;
	printf("Mi función: %d\n", ft_isprint(a));
	printf("La original: %d\n", isprint(a));
	return (0);
} */
