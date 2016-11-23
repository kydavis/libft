/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:13:46 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/22 19:51:25 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Converts a string of numbers into a long long.
*/

long long	ft_atoll(const char *str)
{
	unsigned long long	result;
	long long			neg;

	neg = 1;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str - 0))
	{
		result = 10 * result + ((*str++ - '0') % 10);
		if (result > FT_LLONG_MAX)
			return (neg == 1 ? FT_LLONG_MAX : FT_LLONG_MIN);
	}
	return ((long long)(neg * result));
}
