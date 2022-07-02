/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:08:02 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:13:47 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	a;

	a = 127;
	printf("Mi función: %d\n", ft_isascii(a));
	printf("La original: %d\n", isascii(a));
	return (0);
} */
