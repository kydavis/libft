/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:52:53 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/02 21:11:22 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes an int and prints it into the appropriate file directory.
*/

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		if (n < -9)
			sign = -1;
		else
			n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n > 9 || n < 0)
	{
		ft_putnbr_fd(((n / 10) * sign), fd);
		ft_putnbr_fd(((n % 10) * sign), fd);
	}
	else
		ft_putchar_fd(((n * sign) + '0'), fd);
}
