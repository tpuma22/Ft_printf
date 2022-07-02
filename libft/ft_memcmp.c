/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:02:07 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 15:48:40 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
int memcmp(const void *s1, const void *s2, size_t n);
DESCRIPTION
The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.
PARAMETERS
	1. The first string or pointer to the buffers that you want to compare.
	2. The second string or pointer to the buffers that you want to compare.
	3. The number of bytes that you want to compare.
<The 'const void*' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The memcmp() function returns zero if the two strings are identical, otherwise
returns the difference between the first two differing bytes (treated as unsigned
char values, so that '\200' is greater than '\0', for example).
Zero-length strings are always identical. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "LMOL";
	char	s2[] = "LIMO";
	int		n;

	n = 5;
	ft_strncmp(s1, s2, n);
	printf("%s | %s\n", s1, s2);
	printf("Mi función: %d\n", ft_strncmp(s1, s2, n));
	printf("La original: %d\n", strncmp(s1, s2, n));
	return (0);
} */
