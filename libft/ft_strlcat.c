/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:31:41 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 14:31:41 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
LIBRARY
#include <string.h>
PROTOTYPE
size_t strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
DESCRIPTION
strlcat() appends string src to the end of dst. It will append at most
dstsize - strlen(dst) - 1 characters. It will then NUL - terminate, unless
dstsize is 0 or the original dst string was longer than dstsize
(in practice this should not happen as it means that either dstsize is incorrect
or that dst is not a proper string). If the src and dst strings overlap,
the behavior is undefined.
PARAMETERS
	1. A pointer to the destiny string in which to concatenate.
	2. A pointer to the source string to concatenate.
	3. The size of the destination buffer.
<The 'const char *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The strlcat() functions return the total length of the string they tried to
create, that means the initial length of dst plus the length of src.
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	long_dst;
	size_t	long_src;
	size_t	i;

	long_dst = ft_strlen(dst);
	long_src = ft_strlen(src);
	i = 0;
	if (dstsize < long_dst)
		return (dstsize + long_src);
	if (dstsize > long_dst)
	{
		while ((src[i] != '\0') && (i < (dstsize - long_dst - 1)))
		{
			dst[long_dst + i] = src[i];
			i++;
		}
	}
	dst[long_dst + i] = '\0';
	return (long_src + long_dst);
}

/* int	main(void)
{
	size_t			l;

	char	dest1[6] = "AAAAA";
	char	source1[11] = "BBBBBBBBBB";
	char 	dest2[6] = "AAAAA";
	char	source2[11] = "BBBBBBBBBB";

	l = 8;
	printf("las vriables: %s | %s\n", dest1, source1);
	printf("Mi función: %zu\n", ft_strlcat(dest1, source1, l));
	printf("La concatenación de mi fución es: %s\n", dest1);
	printf("La original: %lu\n", strlcat(dest2, source2, l));
	printf("La concatenación de la original es: %s\n", dest2);
	write (1,"\n",1);
	write (1,"\n",1);
	write (1,"\n",1);
	write (1, dest1,13);
	write (1,"\n",1);
	write (1, dest2,13);
	write (1,"\n",1);
	return (0);
} */
