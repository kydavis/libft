/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubase_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:43:29 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/10 18:19:07 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Takes an unsigned long long and prints it.
*/

void	ft_putubase_fd(unsigned long long n, unsigned long long base, int fd
		, char hex)
{
	if (base > 32)
		return ;
	if (n > (base - 1))
	{
		ft_putubase_fd(ft_absolute(n / base), base, fd, hex);
		ft_putubase_fd(ft_absolute(n % base), base, fd, hex);
	}
	else if (n <= 9)
		ft_putchar_fd((ft_absolute(n) + '0'), fd);
	else if (hex == 0)
		ft_putchar_fd((ft_absolute(n) + 'a' - 10), fd);
	else if (hex == 1)
		ft_putchar_fd((ft_absolute(n) + 'A' - 10), fd);
}
