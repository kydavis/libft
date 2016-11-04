/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:10:08 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/04 09:08:19 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "ft_string.h"
# include "ft_type.h"
# include "ft_macro.h"
# include "ft_list.h"
# include "ft_memory.h"
# include "get_next_line.h"

char				*ft_bitstoa(unsigned long long block, int bit_size);
char				*ft_itoa_base(int n, int base);
char				*ft_itoa(int n);

unsigned long long	ft_power(unsigned long long nbr, int power);
unsigned long long	ft_atoull(const char *str);

long long			ft_absolute(long long n);
long long			ft_atoll(const char *str);


unsigned long 		ft_atoul(const char *str);

long				ft_atol(const char *str);

int					ft_atoi(const char *str);

unsigned int		ft_splcount(const void *v, char c, size_t len);
unsigned int 		ft_atoui(const char *str);

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_negflag(int *n, int *neg);
void				ft_putbits(unsigned long long block, int bit_size);
void				ft_putsbase_fd(long long n, long long base, int fd);
void				ft_putubase_fd(unsigned long long n, 
						unsigned long long base, int fd);

#endif
