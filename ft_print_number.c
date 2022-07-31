/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:20:22 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/31 12:15:11 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number)
{
	char		*chain_nb;

	ft_putnbr_fd(number, 1);
	chain_nb = ft_itoa(number);
	return (ft_strlen(chain_nb));
}

/* int	main(void)
{
	int	a;
	int	fd;

	a = 2147;
	fd = 1;
	ft_putnbr_fd(a, fd);
	return (0);
} */
