/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:19:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/18 12:04:20 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_read_line(int const fd, char *saved[fd], char *buf)
{
	char	*ptr;
	int		ret;
	char	*tmp;

	while ((ptr = ft_strchr(buf, '\n')) == NULL
			&& (ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		tmp = saved[fd];
		saved[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	if (ret == -1)
		return (-1);
	else
		return (0);
}

int				get_next_line(const int fd, char **line)
{
	char			*buf;
	static char		*saved[5000];
	int				ret;
	char			*ptr;
	char			*tmp;

	buf = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (saved[fd] == NULL)
		saved[fd] = ft_strnew(0);
	if ((ret = ft_read_line(fd, saved, buf)) == -1)
		return (-1);
	while (((ptr = ft_strchr(saved[fd], '\n')) != NULL))
	{
		*line = ft_strsub(saved[fd], 0, ptr - saved[fd]);
		tmp = saved[fd];
		saved[fd] = ft_strdup(ptr + 1);
		ft_strdel(&tmp);
		ptr = ft_strchr(saved[fd], '\n');
		return (1);
	}
	*line = ft_strdup(saved[fd]);
	ft_strdel(&saved[fd]);
	return (ft_strlen(*line) > 0) ? (1) : (0);
}
