/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 18:12:51 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/16 18:29:39 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <time.h>

int		main(int argc, char **argv)
{
	int		i;
	int		fd2;
	clock_t start, end;
	double time_spent;
	start = clock();

	if (argc == 2 || 1 == 1)
	{
		fd2 = open("failed.txt", O_RDONLY);
		char 	**line2;
		line2 = malloc(100000);
		*line2 = malloc(100000);
		i = 1;
		while (i == 1)
		{
			i = get_next_line(fd2, line2);
			if (i == 0)
			{
				ft_putendl("i = 0");
				break ;
			}
			printf("%d : len : %zu [%s]\n",i ,ft_strlen(*line2), *line2);
			ft_bzero(line2, ft_strlen(*line2));
		}
		close(fd2);
		end = clock();
	}
	else
		return (1);
	time_spent = (double)(end - start) / CLOCKS_PER_SEC;
 	printf("%f\n",time_spent); 
 	return (0);
}
