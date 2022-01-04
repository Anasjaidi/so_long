/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:56:18 by ajaidi            #+#    #+#             */
/*   Updated: 2022/01/03 13:56:23 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*read_line(char *path, t_map *map)
{
	char	*line;
	int		fd;
	int		error;

	fd = open(path, O_RDWR);
	line = get_next_line(fd);
	if (!line)
		print_error(1);
	while (line)
	{
		error = check_line(line, map);
		if (error)
			check_error(line , error);
	}
}