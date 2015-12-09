/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:13:35 by mfroehly          #+#    #+#             */
/*   Updated: 2015/12/09 02:36:37 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_file	t_file;

struct					s_file
{
	int					fd;
	char				buffer[BUFF_SIZE + 1];
	int					cursor;
	int					length;
	int					temoin;
	t_file				*next;
};

int						get_next_line(int const fd, char **line);

#endif
