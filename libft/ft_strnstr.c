/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:23:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 14:35:18 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
char *strnstr(const char *haystack, const char *needle, size_t len);
DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated string
needle in the string haystack, where not more than len characters are searched.
Characters that appear after a '\0' character are not searched.
PARAMETERS
	1. The string needle to read in order to locates the occurrence.
	2. The string haystack in which to search data from.
	3. The number of bytes to search for.
<The 'const char *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
If needle is an empty string, haystack is returned; if needle occurs nowhere in
haystack, NULL is returned; otherwise a pointer to the first character of the
first occurrence of needle is returned. */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && (needle[j]) && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}

/* int	main(void)
{
	char	str[] = "01: amor-arcoiris";
	char	to_find[] = "amor";
	size_t	len;

	len = 6;
	printf("Mi función: %s\n", ft_strnstr(str, to_find, len));
	printf("La original: %s\n", strnstr(str, to_find, len));
	return (0);
 */
