/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:33:18 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/03 16:25:16 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	else
		return (1);
}

/* int	main(void)
{
	int	resultado;
	int	a;

	a = 65;
	resultado = ft_isalpha(a);
	printf("%d", resultado);
	return (0);
} */
