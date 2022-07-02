/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:14:19 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/20 20:27:06 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/*
int	main(void)
{
	char	str[] = "hola luz";
	t_list	*a;
	a = ft_lstnew(str);
	printf("%s\n", a->content);
}
*/
