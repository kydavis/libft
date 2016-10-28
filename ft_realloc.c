/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 13:57:22 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/28 15:20:53 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocates a new space of memory for ptr, and copies as much memory as
** possible from the original ptr to the new one.
*/

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*newbuf;

	if (!(newbuf = ft_memalloc(new_size)))
		return (NULL);
	ft_memmove(newbuf, ptr, new_size);
	ft_memdel(&ptr);
	return (newbuf);
}
