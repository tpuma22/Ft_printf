/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:52:20 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 14:32:48 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
size_t strlen(const char *s);
DESCRIPTION
The strlen() function computes the length of the string s. It attempts to
compute the length of s, but never scans beyond the first maxlen bytes of s.
PARAMETERS
	1. The string that you want to analize.
<The 'const char *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The strlen() function returns the number of characters that precede the
terminating NUL character. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	char	str[] = "Hola mundo";
	int		a;

	a = ft_strlen(str);
	printf("Mi función: %d\n", a);
	printf("La original: %lu\n", strlen(str));
	return (0);
} */
