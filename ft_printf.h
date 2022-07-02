/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:02 by tpuma             #+#    #+#             */
/*   Updated: 2022/07/02 13:53:05 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<stdarg.h>

/* int	ft_printf(char const *, ...);
int	ft_parameter_format(va_list args, char type); */
/* int	ft_parameter_format(char format); */
double	suma(int n, ...);
size_t	ft_strlen(const char *s);

#endif
