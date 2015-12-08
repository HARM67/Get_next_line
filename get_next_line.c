/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:13:16 by mfroehly          #+#    #+#             */
/*   Updated: 2015/12/04 06:40:19 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_strcon(char **s1, char *s2)
{
	char	*rt;
	size_t	l_s1;
	size_t	l_s2;

	if (*s1 == 0)
	{
		*s1 = ft_strdup(s2);
		ft_bzero(s2, BUFF_SIZE + 1);
		return (1);
	}
	l_s1 = ft_strlen(*s1);
	l_s2 = ft_strlen(s2);
	rt = ft_memalloc(sizeof(char) * (l_s1 + l_s2 + 1));
	if (rt == 0)
		return (-1);
	ft_strcpy(rt, *s1);
	ft_strcat(rt, s2);
	rt[l_s1 + l_s2] = 0;
	free(*s1);
	*s1 = rt;
	ft_bzero(s2, BUFF_SIZE + 1);
	return (1);
}

static t_file	*p_from_fd(int fd, t_file *file)
{
	while (file)
	{
		if (file->fd == fd)
		{
			return (file);
		}
		file = file->next;
	}
	return (0);
}

static int		ex_line(t_file *file, char **retour)
{
	char	temp[BUFF_SIZE + 1];
	int		i;

	i = 0;
	ft_bzero(temp, BUFF_SIZE + 1);
	while (1)
	{
		if (file->cursor == file->length || file->length <= 0)
		{
			file->length = read(file->fd, file->buffer, BUFF_SIZE);
			if (file->length <= 0)
				return (file->length);
			if (ft_strcon(retour, temp) == -1)
				return (-1);
			file->cursor = 0;
			i = 0;
		}
		if (file->buffer[file->cursor] == '\n')
		{
			file->cursor++;
			return (ft_strcon(retour, temp));
		}
		temp[i++] = file->buffer[file->cursor++];
	}
}

int				free_temp(t_file *file)
{
	free(file);
	return (-1);
}

int				get_next_line(int const fd, char **line)
{
	static t_file	*file = 0;
	t_file			*temp;
	int				rt;

	if (line == 0)
		return (-1);
	*line = 0;
	temp = p_from_fd(fd, file);
	if (temp == 0)
	{
		temp = (t_file*)ft_memalloc(sizeof(t_file));
		if (temp == 0)
			return (-1);
		temp->fd = fd;
		temp->length = read(temp->fd, temp->buffer, BUFF_SIZE);
		if (temp->length == -1)
			return (free_temp(temp));
		temp->cursor = 0;
		temp->next = (file) ? file : 0;
		file = temp;
	}
	rt = ex_line(temp, line);
	return ((*line) ? 1 : rt);
}
