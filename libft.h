/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:10:08 by kdavis            #+#    #+#             */
/*   Updated: 2016/11/01 17:55:56 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "get_next_line.h"
# include "ft_memory.h"
# include "ft_list.h"

char				**ft_strsplit(char const *s, char c);

char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *b, const char *l, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1);
char				*ft_strrev(char	*str);
char				*ft_bitstoa(unsigned long long block, int bit_size);
char				*ft_itoa_base(int n, int base);
char				*ft_itoa(int n);
char				*ft_strchrrmv(char *str, char c);
char				*ft_strctrim(char *str, char c);

unsigned long long	ft_power(unsigned long long nbr, int power);

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *str, size_t size);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_iswhitespace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strctchr(char *str, char c);

unsigned int		ft_splcount(const void *v, char c, size_t len);

void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_negflag(int *n, int *neg);
void				ft_putbits(unsigned long long block, int bit_size);

#endif
