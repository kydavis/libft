/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:13:03 by kdavis            #+#    #+#             */
/*   Updated: 2016/09/30 09:16:31 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** Duplicates a string of memory into the heap.
*/

void	*ft_memdup(const void *content, size_t content_size)
{
	void	*result;

	if (!(result = ft_memalloc(sizeof(*result) * content_size)))
		return (NULL);
	return (ft_memcpy(result, content, content_size));
}
