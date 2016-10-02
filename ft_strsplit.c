/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 18:16:43 by kdavis            #+#    #+#             */
/*   Updated: 2016/09/30 11:06:17 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Allocates and returns an array of strings (all null terminated, including
** the array itself) obtained by splitting string s by using character c as a
** delimiter.
*/

char	**ft_strsplit(char const *s, char c)
{
	char			**result;
	size_t			word_len;
	unsigned int	word_count;
	unsigned int	result_index;
	unsigned int	string_index;

	if (!s)
		return (NULL);
	result_index = 0;
	word_count = ft_splitcount(s, c, ft_strlen(s));
	string_index = 0;
	if (!(result = (char **)malloc(sizeof(*result) * (word_count + 1))))
		return (NULL);
	while (word_count-- > 0)
	{
		word_len = 0;
		while (s[string_index] == c)
			string_index++;
		while (s[string_index + word_len] != c)
			word_len++;
		result[result_index++] = ft_strsub(s, string_index, word_len);
		string_index += word_len;
	}
	result[result_index] = 0;
	return (result);
}
