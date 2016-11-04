/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubase_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:43:29 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/03 15:44:59 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Takes an unsigned long long and prints it.
*/

void	ft_putubase_fd(unsigned long long n, unsigned long long base, int fd)
{
	if (base > 32)
		return ;
	if (n > (base - 1))
	{
		ft_putubase_fd(ft_absolute(n / base), base,  fd);
		ft_putubase_fd(ft_absolute(n % base), base,  fd);
	}
	else if (n <= 9)
		ft_putchar_fd((ft_absolute(n) + '0'), fd);
	else
		ft_putchar_fd((ft_absolute(n) + 'A' - 10), fd);
}
