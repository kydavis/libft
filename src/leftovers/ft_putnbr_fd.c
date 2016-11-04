/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:52:53 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/03 11:49:36 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes an int and prints it into the appropriate file directory in base 10.
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 9 || n < -9)
	{
		ft_putnbr_fd((int)ft_absolute(n / 10), fd);
		ft_putnbr_fd((int)ft_absolute(n % 10), fd);
	}
	else
		ft_putchar_fd(((int)ft_absolute(n) + '0'), fd);
}
