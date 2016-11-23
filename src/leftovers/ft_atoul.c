/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:17:31 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/22 19:50:48 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts a string to its respective unsigned long value.
*/

unsigned long	ft_atoul(const char *str)
{
	return ((unsigned long)ft_atoull(str));
}
