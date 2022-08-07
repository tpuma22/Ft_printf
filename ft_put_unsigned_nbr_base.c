/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_base.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:03:23 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/07 14:44:13 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr_base(unsigned long int nbr, char	*base)
{
	unsigned long int	lenbase;
	int					counter;

	counter = 0;
	lenbase = ft_str_len(base);
	if (nbr >= lenbase)
		counter += ft_put_unsigned_nbr_base(nbr / lenbase, base);
	counter += ft_putchar(base[nbr % lenbase]);
	return (counter);
}
