/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 13:57:22 by crenfrow          #+#    #+#             */
/*   Updated: 2016/10/08 15:08:48 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Doubles the size of the buffer for whichever memory string we passed into
** it.
*/

void	*ft_realloc(void *buf, size_t *buf_cap)
{
	size_t	old_cap;
	void	*newbuf;

	old_cap = *buf_cap;
	*buf_cap = old_cap * 2;
	if (!(newbuf = ft_memalloc(*buf_cap)))
	{
		*buf_cap = old_cap;
		return (NULL);
	}
	ft_memcpy(newbuf, buf, old_cap);
	free(buf);
	return (newbuf);
}
