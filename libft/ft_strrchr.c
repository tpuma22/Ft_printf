/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:15:35 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 14:34:12 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
char *strrchr(const char *s, int c);
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered
to be part of the string; therefore if c is '\0', the functions locate the
terminating '\0'. The strrchr() function is identical to strchr(), except it
locates the last occurrence of c.
PARAMETERS
	1. The string that you want to search.
	2. The character that you are looking for.
<The 'const char*' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The functions strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/* int	main(void)
{
	char	c;
	char	dest1[] = "holala";
	char	dest2[] = "holala";

	c = 'o';
	printf("las variables son: %s | %s\n", dest1, dest2);
	printf("Mi función: %s\n", ft_strrchr(dest1, c));
	printf("La original: %s\n", strrchr(dest2, c));
} */
