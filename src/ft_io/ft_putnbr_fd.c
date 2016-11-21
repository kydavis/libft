/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:52:53 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/10 16:48:23 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes an int and prints it into the appropriate file directory in base 10.
*/

void	ft_putnbr_fd(int n, int fd)
{
	ft_putsbase_fd(n, 10, fd, 0);
}
