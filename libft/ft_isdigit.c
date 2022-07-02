/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:01:26 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:12:57 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int b)
{
	if (b < 48 || b > 57)
		return (0);
	else
		return (1);
}

/* int	main(void)
{
	int	a;

	a = '7';
	printf("Mi función: %d\n", ft_isdigit(a));
	printf("La original: %d\n", isdigit(a));
	return (0);
} */
