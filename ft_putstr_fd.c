/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:36:00 by kdavis            #+#    #+#             */
/*   Updated: 2016/10/09 18:43:56 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** 'Writes' a string into the appropriate file directory.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
	{
		write(fd, "(null)", 6);
		return ;
	}
	write(fd, s, ft_strlen(s));
}
