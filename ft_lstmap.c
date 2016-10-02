/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:48:02 by kdavis            #+#    #+#             */
/*   Updated: 2016/09/30 09:45:58 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Iterates a list and applies the function f resulting in a fresh list
** generated from the successive application of f. If an allocation fails
** return NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*tail;

	if (!lst || !f)
		return (NULL);
	if (!(map = f(lst)))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(tail = f(lst)))
			return (NULL);
		ft_lstadd_back(&map, tail);
		lst = lst->next;
	}
	return (map);
}
