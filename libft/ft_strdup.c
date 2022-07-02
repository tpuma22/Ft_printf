/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:10:55 by tpuma             #+#    #+#             */
/*   Updated: 2022/04/10 19:10:55 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
#include <string.h>
PROTOTYPE
char *strdup(const char *s1);
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the string s1,
by using malloc. When does the copy, and returns a pointer to it. The pointer
may subsequently be used as an argument to the function free(3).
PARAMETERS
	1. The string that you want to copy.
<The 'const char*' declares that the object pointed to is read-only,
it is constant, and cannot be modified, so you have to cast it in order to work>
RETURN VALUES
If successful, functions return a pointer to allocated memory. If insufficient
memory is available, NULL is returned and errno is set to ENOMEM. */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		size;
	int		i;

	size = ft_strlen(s1);
	dst = malloc((size + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	printf("%s\n", ft_strdup("Azul"));
	printf("%s\n", strdup("Amarillo"));
	return (0);
} */
