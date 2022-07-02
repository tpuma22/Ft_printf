/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:58:06 by tpuma             #+#    #+#             */
/*   Updated: 2022/05/20 20:03:09 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*act_tlist;

	if (!*f && !*del && !lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		act_tlist = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&map, act_tlist);
		lst = lst->next;
	}
	return (map);
}
