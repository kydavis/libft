/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:49:05 by kdavis            #+#    #+#             */
/*   Updated: 2016/10/02 14:03:22 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts a string of numbers into an int. If the value of the digit string
** is larger than max long long or smaller than min long long return -1 or 0
** respectivley.
*/

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	char				neg;
	unsigned char		number_size;

	neg = 1;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	number_size = 0;
	while (ft_isdigit(*str - 0))
	{
		result = 10 * result + ((*str++ - '0') % 10);
		if ((++number_size > 19 || result > 9223372036854775807) && neg == 1)
			return (-1);
		if ((number_size > 19 || result > 9223372036854775807) && neg == -1)
			return (0);
	}
	return ((int)(neg * result));
}
