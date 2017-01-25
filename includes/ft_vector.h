/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 12:16:20 by kdavis            #+#    #+#             */
/*   Updated: 2017/01/25 14:46:41 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <string.h>
# include <stdint.h>

typedef struct	s_i8vec
{
	char		*arr;
	size_t		len;
	size_t		size;
}				t_i8vec;

typedef struct	s_i32vec
{
	int			*arr;
	size_t		len;
	size_t		size;
}				t_i32vec;

typedef struct	s_i64vec
{
	long long	*arr;
	size_t		len;
	size_t		size;
}				t_i64vec;

typedef struct	s_vec
{
	void		*arr;
	size_t		len;
	size_t		total;
	uint8_t		size;
}				t_vec;

int				ft_initialize_vec(t_vec *vec, uint8_t sz, size_t t, size_t len);
#endif
