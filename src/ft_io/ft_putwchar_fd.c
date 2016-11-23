/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:32:46 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/22 18:52:55 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <wchar.h>

/*
** Use the ft_put_nbytes functions to translate the wint_t input into the
** appropriate UTF-8 format depending on the number of bytes the multibyte
** character is represented by.
*/

static void	ft_put_nbytes(int n, wint_t wc, int fd)
{
	unsigned char	bytes[4];
	unsigned int	n_bytes;

	n_bytes = n;
	ft_bzero(bytes, n);
	if (n-- > 0)
		bytes[n] = (!n ? 0x0 + (wc & 0x7F) : 0x80 + (wc & 0x3F));
	if (n-- > 0)
		bytes[n] = (!n ? 0xC0 : 0x80) + ((wc & 0xFC0) >> 6);
	if (n-- > 0)
		bytes[n] = (!n ? 0xE0 : 0x80) + ((wc & 0x3F000) >> 12);
	if (n-- > 0)
		bytes[n] = (!n ? 0xF0 : 0x80) + ((wc & 0x1C0000) >> 18);
	write(fd, bytes, n_bytes);
}

void		ft_putwchar_fd(wint_t wc, int fd)
{
	if (wc <= 0x7F && wc >= 0x00)
		ft_put_nbytes(1, wc, fd);
	else if (wc <= 0x7FF)
		ft_put_nbytes(2, wc, fd);
	else if (wc <= 0xFFFF)
		ft_put_nbytes(3, wc, fd);
	else if (wc <= 0x10FFFF)
		ft_put_nbytes(4, wc, fd);
	else
		write(fd, "value not supported by UTF-8", 28);
}
