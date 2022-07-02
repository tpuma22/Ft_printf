/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:13:32 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 14:30:40 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
void *memmove(void *dst, const void *src, size_t len);
DESCRIPTION
The memmove() function copies len bytes from string src to string dst.
The two strings may overlap, the copy is always done in non-destructive manner.
Copy bytes from one buffer to another, handling overlapping memory correctly
PARAMETERS
	1. The destiny pointer in which to write.
	2. A pointer to the buffer to copy data from.
	3. The number of bytes to copy.
<'void *' is normally used as a way to pass non-specific pointers. You have to
convert it to another data type>.
<The 'const void *' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
The memmove() function returns the original value of dst. */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((char *)dst);
}

/* int	main(void)
{
	size_t			len;
	unsigned char	*cad_dst;
	unsigned char	cad_src[] = "lorem ipsum dolor sit amet";
	unsigned char	*cad_dst2;
	unsigned char	cad_src2[] = "lorem ipsum dolor sit amet";
	cad_dst = cad_src + 1;
	cad_dst2 = cad_src2 + 1;
	len = 8;
	printf("variables: %s | %s\n", cad_dst, cad_src);
	printf("Mi función: %s\n", ft_memmove(cad_dst, cad_src, len));
	printf("La original: %s\n", memmove(cad_dst2, cad_src2, len));
	return (0);
}
 */
