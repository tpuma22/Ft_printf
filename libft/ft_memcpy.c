/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:38:54 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/06 22:09:57 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
void *memcpy(void *restrict dst, const void *restrict src, size_t n);
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined. Applications in which dst and src
might overlap should use memmove(3) instead.
PARAMETERS
	1. The destiny pointer in which to write.
	2. The source string to copy data from.
	3. The number of bytes to copy.
<'void*' is normally used as a way to pass non-specific pointers. You have to
convert it to another data type>.
<The 'const void *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The memcpy() function returns the original value of dst. */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((unsigned char *)dst);
}

/* int	main(void)
{
	size_t			len;
	unsigned char	cad_dst[11] = "Hola mundo";
	unsigned char	cad_src[6] = "AAAAA";
	unsigned char	cad_dst2[11] = "Hola mundo";
	unsigned char	cad_src2[6] = "AAAAA";

	len = 20;
	printf("variables: %s | %s\n", cad_dst, cad_src);
	printf("Mi función: %s\n", ft_memcpy(cad_dst, cad_src, len));
	printf("La original: %s\n", memcpy(cad_dst2, cad_src2, len));
	return (0);
} */
