/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:44:12 by njerasea          #+#    #+#             */
/*   Updated: 2022/08/21 14:08:13 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int	i = 0;
	
	(void)argv;
	(void)argc;
	fd = open("/Users/njerasea/project/doing/get_next_line/1_tripouille/files/43_with_nl", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("|%s|", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	free(line);
	printf("|%s|", line);
	free(line);
	fd = close(fd);
	return (0);
}

/*int	main(void)
{
	int	fd1;
	int	fd2;
	int	fd3;
	char	*s;
	fd1 = open("/Users/njerasea/project/doing/get_next_line/test.txt", O_RDONLY);
	fd2 = open("/Users/njerasea/project/doing/get_next_line/test.txt", O_RDONLY);
	fd3 = open("/Users/njerasea/project/doing/get_next_line/test.txt", O_RDONLY);

	if(fd1 != -1)
	{
		s = get_next_line(fd1);
		printf("fd %s", s);
		s = get_next_line(fd2);
		printf("fd2 %s", s);
		s = get_next_line(fd1);
		printf("fd %s", s);
		s = get_next_line(fd3);
		printf("fd3 %s", s);
		while ((s = get_next_line(fd1)) != NULL)
			printf("%s", s);
		fd1 = open("/Users/njerasea/project/doing/get_next_line/test.txt", O_RDONLY);
		s = get_next_line(fd1);
		printf("%s", s);
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/
