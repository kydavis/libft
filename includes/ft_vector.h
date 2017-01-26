/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 12:16:20 by kdavis            #+#    #+#             */
/*   Updated: 2017/01/25 16:40:43 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <string.h>
# include <stdint.h>

typedef struct	s_vec
{
	void		*arr;
	size_t		len;
	size_t		total;
	uint8_t		size;
}				t_vec;

int				ft_initialize_vec(t_vec *vec, uint8_t sz, size_t t, size_t len);
int				ft_grow_vec(t_vec *self, size_t requested_bytes);
#endif
