/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:50:38 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/22 19:47:32 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <wchar.h>
# include "ft_string.h"

size_t	ft_ullsize_base(unsigned long long value, unsigned long long base);
size_t	ft_llsize_base(long long value, long long base, int sflag);

void	ft_putchar_fd(char c, int fd);
void	ft_putwchar_fd(wint_t wc, int fd);
void	ft_putchar(char c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putwstr_fd(wint_t *wstr, int fd);
void	ft_putstr(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putbits(unsigned long long block, int bit_size);
void	ft_putsbase_fd(long long n, long long base, int fd, char hex);
void	ft_putubase_fd(unsigned long long n, unsigned long long base, int fd,
	   	char hex);

#endif