/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:23:28 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:24:27 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a < 48 || a > 57) && (a < 65 || a > 90) && (a < 97 || a > 122))
		return (0);
	else
		return (1);
}

/* int	main(void)
{
	int	a;

	a = '?';
	printf("Mi función: %d\n", ft_isalnum(a));
	printf("La original: %d\n", isalnum(a));
	return (0);
}
 */
