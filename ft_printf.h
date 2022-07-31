/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:02 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/31 12:27:21 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(char const *str, ...);
int	ft_filter_format(va_list param, char format);
int	ft_putnbr_unsigned(long int n);
int	ft_putchar(char c);
int	ft_print_str(char *chain);
int	ft_put_unsigned_nbr_base(unsigned long int nbr, char	*base);
int	ft_print_number(int number);

#endif
