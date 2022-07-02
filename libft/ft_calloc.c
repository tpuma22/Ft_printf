/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:23:56 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 19:11:16 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <stdlib.h>
PROTOTYPE
void *calloc(size_t count, size_t size);
DESCRIPTION
The calloc() function contiguously allocates enough space for count objects that
are size bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.
PARAMETERS
	1. The count of objects to allocate.
	2. The size of bytes in each object.
RETURN VALUES
If successful, calloc() functions return a pointer to allocated memory.
If there is an error, they return a NULL pointer and set errno to ENOMEM. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(size * count);
	if (!dest)
		return (0);
	ft_memset(dest, 0, size * count);
	return (dest);
}
