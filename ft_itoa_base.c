/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 12:15:37 by kdavis            #+#    #+#             */
/*   Updated: 2016/10/17 09:13:44 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** Converts n into it's respective base form from base 2-16 and returns a
** string of characters corresponding to the conversion. Note, only base 10
** works with negative values.
*/

static size_t	static_ibase_size(int n, int base)
{
	size_t	size;

	size = 1;
	while (n / base != 0)
	{
		size++;
		n /= base;
	}
	return (size);
}

static char		*static_loader(char *str, int n, int base, size_t size)
{
	char	*tail;
	int		mod;

	tail = str;
	while (size > 0)
	{
		mod = n % base;
		if (mod > 9)
			*(tail + --size) = mod + 55;
		else
			*(tail + --size) = mod + '0';
		n /= base;
	}
	return (str);
}

char			*ft_itoa_base(int n, int base)
{
	char	*result;
	size_t	size;

	if (base < 2 || (base != 10 && n < 0) || base > 32)
		return (NULL);
	if (base == 10)
		return (ft_itoa(n));
	size = static_ibase_size(n, base);
	if (!(result = ft_strnew(size)))
		return (NULL);
	return (static_loader(result, n, base, size));
}
