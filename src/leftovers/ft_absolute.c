/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:58:59 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/03 11:10:12 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the absolute value of a long long. DOES NOT WORK WITH MIN LONG LONG.
*/

long long	ft_absolute(long long n)
{
	return (n < 0 ? -n : n);
}