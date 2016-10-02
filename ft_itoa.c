/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:12:58 by kdavis            #+#    #+#             */
/*   Updated: 2016/09/29 07:40:51 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determines the size of the string needed for itoa. Exception case for n = 0.
*/

static int	ft_intsize(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

/*
** Loads the string for itoa.
*/

static char	*ft_loadnbr(int n, char *c)
{
	char	sign;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (n > 0)
	{
		*c-- = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		*c = '-';
	else
		++c;
	return (c);
}

/*
** Converts an int into a string. Needed exception cases for min int and zero.
*/

char		*ft_itoa(int n)
{
	char	*nbr;
	int		size;

	size = ft_intsize(n);
	if (!(nbr = ft_strnew(size)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(nbr, "-2147483648"));
	if (n == 0)
		*nbr = '0';
	else
		nbr = ft_loadnbr(n, (nbr + size - 1));
	return (nbr);
}
