/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:11:01 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 16:26:42 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
char *strchr(const char *s, int c);
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered
to be part of the string; therefore if c is '\0', the functions locate the
terminating '\0'.
PARAMETERS
	1. The string that you want to search.
	2. The character that you are looking for.
<The 'const char*' declares that the object pointed to is read-only, it is
constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The functions strchr() return a pointer to the located character,
or NULL if the character does not appear in the string. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
	s++;
	}
	return ((char *)s);
}
/*
int	main(void)
{
	char	c;
	char	dest1[] = "hola";
	char	dest2[] = "hola";

	c = 'l';
	printf("las variables son: %s | %s\n", dest1, dest2);
	printf("Mi función: %s\n", ft_strchr(dest1, c));
	printf("La original: %s\n", strchr(dest2, c));
}
 */
