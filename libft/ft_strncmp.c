/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:32:54 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/07 11:36:26 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
int strncmp(const char *s1, const char *s2, size_t n);
DESCRIPTION
The strncmp() functions lexicographically compare the null-terminated strings s1
and s2.The strncmp() function compares not more than n characters. Because it is
designed for comparing strings rather than binary data, characters that appear
after a '\0' character are not compared.
PARAMETERS
	1. The first string that you want to compare.
	2. The second string that you want to compare.
	3. The maximum number of characters that you want to compare.
<The 'const char *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The strncmp() functions return an integer greater than, equal to, or less than 0,
according as the string s1 is greater than, equal to, or less than the string s2.
The comparison is done using unsigned characters, so that '\200' is greater than
'\0'. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((unsigned char *)s1)[i] != '\0'
		|| ((unsigned char *)s2)[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
