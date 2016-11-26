/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:32:46 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/25 17:34:43 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <wchar.h>

/*
** ft_putwchar_fd takes a wchar_t argument and uses ft_wctomb to convert the
** wide character into a multibyte string, which it then writes to the
** appropriate file descriptor.
*/

wint_t	ft_putwchar_fd(wchar_t wc, int fd)
{
	char	bytes[4];
	int		n_bytes;
	
	ft_bzero(bytes, 4);
	if ((n_bytes = ft_wctomb(bytes, wc)) == -1)
		write(2, "value not supported by UTF-8", 28);
	else
		write(fd, bytes, n_bytes);
	return (n_bytes == -1 ? WEOF : wc);
}
