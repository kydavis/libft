/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llsize_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:54:28 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/10 16:45:06 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** ft_llsize_base calculates the number of characters present in an
** long long for the particular base. Increases the size if the value is
** negative and base 10 to accomadate the '-' character.
*/

size_t	ft_llsize_base(long long value, long long base)
{
	size_t	size;

	if (base < 0)
		return (0);
	if (base == 1)
		return (ft_absolute(value));
	size = 1;
	if (value < 0 && base == 10)
		size++;
	while (value / base != 0)
	{
		size++;
		value /= base;
	}
	return (size);
}
