/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:44:18 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/22 19:48:53 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <wchar.h>

/*
** ft_strwlen returns the number of BYTES in the wide string.
*/

size_t	ft_strwlen(wint_t *wstr)
{
	wint_t	*tail;

	tail = wstr;
	while (*tail)
		tail += 1;
	return (*tail - *wstr);
}

/*
** For now ft_putwstr will just iterativley call ft_putwchar, but want to
** figure out a way for it to create a multibyte string for it to read.
*/

void	ft_putwstr_fd(wint_t *wstr, int fd)
{
	while (*wstr)
		ft_putwchar_fd(*wstr++, fd);
}
