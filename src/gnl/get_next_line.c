/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 11:08:38 by kdavis            #+#    #+#             */
/*   Updated: 2016/12/08 17:49:26 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <unistd.h>

/*
** Parce_buffer will search the buffer for the new line. If a new line is found
** then set the lst->content to a duplicate of the buffer starting at the
** character after the new line, and set line to a substring of the start of the
** buffer up until the new line character. If no new line characters are found
** return NULL.
*/

static int		parce_buffer(t_list *lst, char *buf, char **line)
{
	size_t	buflen;
	char	*nl;
	char	*leftover;

	buflen = ft_strlen(buf);
	if (!(nl = ft_memchr(buf, '\n', buflen)))
		return (0);
	if (!(*line = ft_strsub(buf, 0, (nl - buf))))
	{
		ft_memdel((void *)&buf);
		return (-1);
	}
	leftover = ft_strdup(nl + 1);
	ft_memdel((void *)&buf);
	if (!(leftover))
	{
		ft_memdel((void **)line);
		return (-1);
	}
	lst->content = leftover;
	return (1);
}

/*
** Read_line will add content to the end of lst->content in chunks of BUFF_SIZE
** until a new line is found, or the file is read to completion.
*/

static int		read_line(t_list *lst, size_t o, char **line, int parce_flag)
{
	ssize_t	ret;

	while (!(parce_flag))
	{
		if ((ret = read(lst->content_size, lst->content + o - 1, BUFF_SIZE))
			== -1)
			return (-2);
		((char *)lst->content)[ret + o] = '\0';
		if ((parce_flag = parce_buffer(lst, lst->content, line)) != 0)
			break ;
		o += BUFF_SIZE;
		if (!(lst->content = ft_memreallocf(lst->content, BUFF_SIZE + o, o)))
			return (-1);
		if (!ret)
		{
			*line = ft_strdup((char *)lst->content);
			if (**line)
				return (2);
			if (!(*line))
				return (-1);
			return (0);
		}
	}
	return (parce_flag == -1 ? -1 : 1);
}

/*
** Search_line will search the left over contents in lst->content for a
** new line. If one is found then it returns succesful, but if one isn't
** found then it will initiate read line in order to find the next new line.
*/

static int		search_line(t_list *lst, char **line)
{
	int		parce_flag;
	int		read_flag;
	size_t	o;

	if ((parce_flag = parce_buffer(lst, lst->content, line)) == -1)
		return (-1);
	if (parce_flag == 0)
	{
		o = ft_strlen(lst->content) + 1;
		if (!(lst->content = ft_memreallocf(lst->content, BUFF_SIZE + o, o)))
			return (-1);
		read_flag = read_line(lst, o, line, parce_flag);
		if (read_flag != 1)
		{
			ft_memdel(&lst->content);
			return (read_flag);
		}
	}
	return (1);
}

/*
** Scans fd_list for a link that contains the appropriate fd. If none are found
** then a new link is made and added to the front. WORKS!
*/

static t_list	*scan_list(t_list **fd_lst, const int fd)
{
	t_list	*tail;
	void	*ptr;

	tail = *fd_lst;
	while (tail)
	{
		if (tail->content_size == (size_t)fd)
			return (tail);
		tail = tail->next;
	}
	if (!(ptr = ft_memalloc(1)))
		return (NULL);
	tail = ft_lstnew(ptr, 1);
	ft_memdel(&ptr);
	if (!(tail))
		return (NULL);
	tail->content_size = fd;
	if (!(*fd_lst))
	{
		*fd_lst = tail;
		return (tail);
	}
	ft_lstadd(fd_lst, tail);
	return (tail);
}

/*
** get_next_line returns the next line in the file described by fd.
** It returns 1 in the case that it succesfully found a new line,
** 0 in the case that it has finished reading the file,
** and -1 in the case that there was an error.
*/

int				get_next_line(const int fd, char **line)
{
	static t_list	*fd_lst = 0;
	int				sl_flag;
	t_list			*tail;

	if (fd < 0 || line == NULL)
		return (-1);
	if (!(tail = scan_list(&fd_lst, fd)))
		return (-1);
	if (!(sl_flag = search_line(tail, line)))
	{
		ft_relink_lst(&fd_lst, tail);
		return (0);
	}
	if (sl_flag == 2 || sl_flag == -2)
		ft_relink_lst(&fd_lst, tail);
	if (sl_flag == -1)
	{
		ft_lstdel(&fd_lst, ft_delcontent);
		return (-1);
	}
	if (sl_flag == -2)
		return (-1);
	return (1);
}
