/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:10:08 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/10 10:11:33 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "ft_string.h"
# include "ft_type.h"
# include "ft_printf.h"
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

unsigned int 		ft_atoui(const char *str);

void				ft_negflag(int *n, int *neg);

#endif
