/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_base.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:03:23 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/28 20:14:11 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr_base(unsigned long int nbr, char	*base)
{
	unsigned long int	lenbase;
	int					counter;

	counter = 0;
	lenbase = ft_strlen(base);
	if (nbr >= lenbase)
		counter += ft_put_unsigned_nbr_base(nbr / lenbase, base);
	counter += ft_putchar(base[nbr % lenbase]);
	return (counter);
}

/* int main(void)
{
	char				*c;
	unsigned long int	i;

	c = "0123456789abcdef";
	i = 255;
	printf("%d\n",ft_put_unsigned_nbr_base(i,c));
	return (0);
} */
