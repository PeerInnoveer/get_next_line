/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:24:52 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/16 18:33:41 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	char	*line;
	int		read;

	fd = open("A51.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	line = ft_strnew(0);
	while ((read = get_next_line(fd, &line)) > 0)
	{
		printf("%d: %s\n", read, line);
	}
	printf("%d: %s\n", read, line);
	if (line)
		free(line);
	return (0);
}
