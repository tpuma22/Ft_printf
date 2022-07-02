/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:02 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 22:31:24 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"


int	ft_printf(char const *str, ...);
/* int	ft_parameter_format(va_list args, char type); */
/* int	ft_parameter_format(char format); */
/* double	suma(int n, ...); */

#endif
