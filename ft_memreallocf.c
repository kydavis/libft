/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memreallocf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 12:28:50 by kdavis            #+#    #+#             */
/*   Updated: 2016/10/29 12:28:57 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocates a new space of memory for ptr, and copies as much memory as
** possible from the original ptr to the new one. Frees the original
** pointer if the reallocation fails.
*/

void	*ft_memreallocf(void *ptr, size_t new_size)
{
	void	*newbuf;

	if (!(newbuf = ft_memalloc(new_size)))
	{
		ft_memdel(&ptr);
		return (NULL);
	}
	if (!ptr)
		return (newbuf);
	ft_memmove(newbuf, ptr, new_size);
	ft_memdel(&ptr);
	return (newbuf);
}
