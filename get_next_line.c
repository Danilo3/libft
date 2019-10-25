/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <ayellin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 18:43:17 by ayellin           #+#    #+#             */
/*   Updated: 2019/10/25 15:34:27 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "get_next_line.h"

int		get_from_buffer(char **buf, char **line, ssize_t size, ssize_t position)
{
	ssize_t pos;
	char	*tmp;

	if (*buf && (pos = ft_strchri(*buf, '\n')) >= 0)
	{
		*line = ft_strsub(*buf, 0, pos);
		*buf = ft_strsubf(buf, pos + 1, ft_strlen(*buf + pos + 1));
		return ((*line && *buf) ? 1 : -1);
	}
	else if (position != -1)
	{
		(*line)[position] = '\0';
		tmp = ft_strsub(*line, position + 1, ft_strlen(*line + position + 1));
		*line = ft_strjoinf(*buf, *line, 3);
		if (tmp && (*buf = ft_strdup(tmp)))
			free(tmp);
		return ((*line && *buf) ? 1 : -1);
	}
	else if (size == 0 && *buf && (*buf)[0])
	{
		if ((*line = ft_strsubf(buf, 0, ft_strlen(*buf))) != NULL)
			return (1);
		return (-1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buffers[OPEN_MAX];
	ssize_t		size;
	ssize_t		position;

	if (fd >= 0 && fd < OPEN_MAX && get_from_buffer(buffers + fd, line, -1, -1))
		return (1);
	if (fd < 0 || fd >= OPEN_MAX ||
		!line || !(*line = ft_strnew(BUFF_SIZE + 1)))
		return (-1);
	while ((size = read(fd, *line, BUFF_SIZE)) > 0)
	{
		(*line)[size] = '\0';
		if ((position = ft_strchri(*line, '\n')) != -1)
			return (get_from_buffer(buffers + fd, line, size, position));
		else if (position == -1)
		{
			if (!(buffers[fd] = ft_strjoinf(buffers[fd], *line, 1)))
				return (-1);
		}
		ft_bzero(*line, BUFF_SIZE);
	}
	if (size == 0)
		return (get_from_buffer(buffers + fd, line, 0, -1));
	return (size);
}
