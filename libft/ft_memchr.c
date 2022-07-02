/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:21:07 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 11:30:15 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
void *memchr(const void *s, int c, size_t n);
DESCRIPTION
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.
PARAMETERS
	1. The string in which to check for the occurence of c.
	2. The character that you are looking for.
	3. The number of bytes to check for any occurence of c in s.
	The number of bytes to search in the buffer.
<The 'const void*' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The memchr() function returns a pointer to the byte located, or NULL if no such
byte exists within n bytes. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
	i++;
	}
	return (0);
}

/* int	main(void)
{
	char				a;
	size_t			len;
	unsigned char	cadena[] = "bonjourno";

	a = 'n';
	len = 2;
	printf("variable: %s\n", cadena);
	printf("Mi función: %s\n", ft_memchr(cadena, a, len));
	printf("La original: %s\n", memchr(cadena, a, len));
	return (0);
} */
